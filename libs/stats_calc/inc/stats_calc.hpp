#ifndef STATS_CALC_H
#define STATS_CALC_H

#include <iostream>
#include <cmath>
#include <vector>

namespace stats_calc {

    /*
    /   Fractional Error calculation
    */
    template <typename T>
    T frac_error(T alpha, T beta) {
        if (alpha != 0) {
            return abs(alpha - beta) / alpha;
        } else {
            std::cout << "error: denominator == 0 in frational error calculation" << std::endl;
        }
    }
} 


#endif