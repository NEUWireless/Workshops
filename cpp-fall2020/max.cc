#include <algorithm> // needed for std::max
#include <iostream>

/* MACRO IMPLEMENTATION
 * this is a literal copy paste, breaks with side-effects
 * example here is rand(), which is evaluated again in the body
 *
 * #define Max(a, b) ((a < b) ? b : a)
 */

int
main(int ac, char* av[]) {
    for (int ii = 0; ii < 20; ii++) {
        std::cout << std::max(rand() % 10, 5) << std::endl;
    }
    return 0;
}
