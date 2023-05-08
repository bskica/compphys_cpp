#include <iostream>
#include <sstream>
#include "ch_1.h"

int main(int argc, char **argv) {
    for (int i=1; i < argc; i++) {
        int test;
        std::istringstream stream(argv[i]);
        if (stream >> test) {
            std::cout << "Input accepted: " << test << std::endl;
        } else { 
            std::cout << "dum dum" << argv[i] << std::endl;
        }
        
    }

    std::cout << "Input print complete." << std::endl;
    std::cout << "Would you like to run \"Hello World?\" (y/n)" << std::endl;
    char in1[8];
    std::cin >> in1;
    bool res1 = input_parser(in1);
    if (res1) {
        hello_world();
    } else {
        std::cout << "Goodbye responsible person!" << std::endl;
    }
    return 0;
}