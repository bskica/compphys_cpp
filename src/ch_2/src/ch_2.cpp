#include <iostream>
#include <cmath>
#include <limits>
#include <cstring>

#include "ch_2.h"

void print_data_sizes() {
    std::cout << "Datatype: bool  Size: " << sizeof(bool) << std::endl;
    std::cout << "Datatype: char  Size: " << sizeof(char) << std::endl;
    std::cout << "Datatype: int  Size: " << sizeof(int) << std::endl;
    std::cout << "Datatype: unsigned int  Size: " << sizeof(unsigned int) << std::endl;
    std::cout << "Datatype: long int  Size: " << sizeof(long int) << std::endl;
    std::cout << "Datatype: long unsigned int  Size: " << sizeof(long unsigned int) << std::endl;
    std::cout << "Datatype: short int  Size: " << sizeof(short int) << std::endl;
    std::cout << "Datatype: short unsigned int  Size: " << sizeof(short unsigned int) << std::endl;
    std::cout << "Datatype: float  Size: " << sizeof(float) << std::endl;
    std::cout << "Datatype: double  Size: " << sizeof(double) << std::endl;
}

void exercise_1(const char *datatype) {
    //set the exponent/fraction bit allocation based on float/double input
    int e, p;
    if(std::strcmp(datatype,"float")) {
        e = 8, p = 23;
        std::cout << "Verify: " << std::numeric_limits<float>::epsilon() << std::endl;
    } else if (std::strcmp(datatype,"double")) {
        e = 11, p = 52;
        std::cout << "Verify: " << std::numeric_limits<double>::epsilon() << std::endl;
    } else {
        std::cout << "Input must be either float or double" << std::endl;
    } 

    //do the math   
    double precision = pow(2, -(p));
    std::cout << "Calculated result: " <<precision << std::endl;

    
    

}
void exercise_2() {

}
void exercise_3() {

}
void exercise_4() {

}
void exercise_5() {

}
void exercise_6() {

}
void exercise_7() {

}
void exercise_8() {

}
void exercise_9() {

}
void exercise_10() {

}



