#include <iostream>
#include <string>

template <typename T>
T tmax(T a, T b)
{
    return a < b ? b : a;
}

int main() {
    std::string a = "potato";
    std::string b = "aardvark";
    std::cout << tmax<std::string>(a, b)
        << " " << tmax<int>(0, 1) << std::endl;
    return 0;
}
