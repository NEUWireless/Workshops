#include <iostream>
/* non-constexpr implementation
 * this is (probably) evaluated at runtime
 * but the fibonacci numbers are certainly constant!
 * let the compiler do the work.
 *
 * int fib(int nn) {
 *     return nn == 1 || nn == 2 ? 1: fib(nn - 1) + fib(nn - 2);
 * }
 */

constexpr int fib(const int nn) {
    return nn == 1 || nn == 2 ? 1 : fib(nn - 1) + fib(nn - 2);
}

int main(int ac, char* av[]) {
    std::cout << fib(22) << std::endl;
    return 0;
}
