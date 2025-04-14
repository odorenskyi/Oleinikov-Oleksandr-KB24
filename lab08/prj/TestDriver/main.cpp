#include <iostream>
#include <cmath>
#include "ModulesOleinikov.h"

int main() {
    double x = -2.0;
    double y = 3.0;
    double z = 4.0;

    double expected = std::fabs(std::pow(y * z, std::fabs(x))) - (y / M_PI) - std::sqrt(std::fabs(x));
    double result = s_calculation(x, y, z);

    std::cout << "Input: x=" << x << ", y=" << y << ", z=" << z << std::endl;
    std::cout << "Expected: " << expected << std::endl;
    std::cout << "Actual:   " << result << std::endl;

    if (std::fabs(expected - result) < 1e-6) {
        std::cout << "Test passed" << std::endl;
    } else {
        std::cout << "Test failed" << std::endl;
    }

    return 0;
}
