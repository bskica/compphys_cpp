#include <iostream>
#include <cmath>

#include "ch_2.h"

int main() {
    print_data_sizes();

    
    char datatype[8];
    std::cout << "Input \"float\" or \"double\" for Ex. 1: " << std::endl;
    std::cin >> datatype;
    exercise_1(datatype); 
}