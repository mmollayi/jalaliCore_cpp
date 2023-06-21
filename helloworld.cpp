#include <iostream>
#include "jalali.h"

int main()
{
    std::cout << "Hi there\n"; // invalid operator (<), extraneous semicolon, undeclared variable (x)
    int x {jalali_jd0_cpp(1401)};
    std::cout << x;
    return 0; // missing semicolon at end of statement
}
