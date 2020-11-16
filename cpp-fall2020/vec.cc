#include <numeric>
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    // TASK 1: printing out the contents of a list
    // ============================================

    /* IMPLEMENTATION 1: C-style
     * isn't counting the size manually kind of a pain?

     std::vector<int> xx = {1, 2, 3, 4, 5};
     for (int ii = 0; ii < 5; ii++) {
     std::cout << xx[ii] << " ";
     }
     std::cout << std::endl;
     */


    /* IMPLEMENTATION 2: C++
     * fancy C++ for loop symantics
     * benfits/drawbacks of `auto`

     std::vector<int> xx = {1, 2, 3, 4, 5};
     for (auto const& ii : xx) {
     std::cout << ii << " ";
     }
     std::cout << std::endl;
     */


    /* IMPLMENTATION 3: for-range loop with initializer
     * straight to the point!
     *
     for (auto xx: {1, 2, 3, 4, 5}) {
     std::cout << xx << " ";
     }
     std::cout << std::endl;
     */

    // TASK 2: sorting a list
    // ======================
    std::vector<int> yy = {5, 2, 1, 3, 4};
    std::sort(yy.begin(), yy.end());
    for (auto ii: yy) {
        std::cout << ii << " ";
    }
    std::cout << std::endl;

    // TASK 3: sorting a list... with lambdas!
    // =======================================
    std::vector<int> zz = {-5, 2, -1, 3, 4};
    std::sort(zz.begin(), zz.end(),
        [](auto a1, auto a2) {
            return (std::abs(a1) < std::abs(a2));
        }
    );
    for (auto ii: zz) {
        std::cout << ii << " ";
    }
    std::cout << std::endl;

    // TASK 4: any_of, find_if niceness
    // =======================
    // std::vector<int> xx = {1, 2, 3, -4, 5};
    /* 1: any_of
    if (std::any_of(xx.begin(), xx.end(), [](auto a1) { return a1 < 0; })) {
        std::cout << "negatives found!\n";
    }
    */
    /* 2: find_if
    std::vector<int>::iterator it =
        std::find_if(xx.begin(), xx.end(),
            [](auto a1) { return a1 % 2 == 0; });
    std::cout << "first even value: " << *it << std::endl;
    */

    // TASK 5: folds
    // =============
    /* 1: folding over integers
    std::vector<int> xx = {1, 3, -4, 3, -7};
    int sum = 0;
    std::cout << std::accumulate(xx.begin(), xx.end(), sum) << std::endl;
    */
    /* 2: folding over strings with lambda
    int sum = 0;
    std::vector<std::string> xx = {"a", "abc", "zyxwvu", "efgh"};
    int totallen =
        std::accumulate(xx.begin(), xx.end(), sum,
            [](int val, std::string str) { return val + str.length(); });
    std::cout << totallen << std::endl;
    */
}
