#include <cmath>
#include "ModulesOleinikov.h"

double s_calculation(double x, double y, double z) {
    double part1 = std::pow(y * z, std::fabs(x));       // (yz)^|x|
    double part2 = y / M_PI;                            // y / π
    double part3 = std::sqrt(std::fabs(x));             // sqrt(|x|)

    double result = std::fabs(part1) - part2 - part3;   // |(yz)^|x|| - y/π - sqrt(|x|)
    return result;
}
