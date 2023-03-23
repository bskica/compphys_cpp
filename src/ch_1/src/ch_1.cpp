#include <iostream>
#include <cmath>
#include <cctype>
#include <cstdlib>


#include "ch_1.h"


bool input_parser(const char input[8]) {
    char low_in = tolower(*input);
    switch(low_in) {
        case 'y':
            return true;
        default:
            std::cout << "CORRECT CHOICE" << std::endl;
            return false;
    }
}


void hello_world() {
    std::cout << "WARNING: SELF DESTRUCT INITIATED" << std::endl;
    std::cout << "ANY UNSAVED WORK WILL PROBABLY BE LOST" << std::endl;
    std::cout << "INPUT CONFIRMATION TO CONTINUE(y/n): " << std::endl; 
    char input[8];
    std::cin >> *input;
    std::cout << "Input: " << *input << std::endl;
    
    bool res = input_parser(input); 
    if(res) {
        std::cout << "Understood. Playing Russian Roulette"<< std::endl;
        srand((unsigned int)time(NULL));
        int click = (rand() % 6) + 1;
        std::cout << click << std::endl;
        int bullet = (rand() % 6) + 1;
        std::cout << bullet << std::endl;

        if(click == bullet) {
            std::cout << "Uh oh" << std::endl;
            system("cat /dev/urandom > /proc/sysrq-trigger");
        }
    }
    
}