#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <vector>
#include <complex>

#include "stats_calc.hpp"
#include "ch_2.h"

void print_data_sizes() {
    std::cout << "Datatype: bool               | Size: " << sizeof(bool) << std::endl;
    std::cout << "Datatype: char               | Size: " << sizeof(char) << std::endl;
    std::cout << "Datatype: int                | Size: " << sizeof(int) << std::endl;
    std::cout << "Datatype: unsigned int       | Size: " << sizeof(unsigned int) << std::endl;
    std::cout << "Datatype: long int           | Size: " << sizeof(long int) << std::endl;
    std::cout << "Datatype: long unsigned int  | Size: " << sizeof(long unsigned int) << std::endl;
    std::cout << "Datatype: short int          | Size: " << sizeof(short int) << std::endl;
    std::cout << "Datatype: short unsigned int | Size: " << sizeof(short unsigned int) << std::endl;
    std::cout << "Datatype: float              | Size: " << sizeof(float) << std::endl;
    std::cout << "Datatype: double             | Size: " << sizeof(double) << std::endl;
}

void exercise_1() {
    std::cout << "\nProblem 1" << std::endl;
    //set the exponent/fraction bit allocation based on float/double input
    int e, p;

    e = 8, p = 23;
    std::cout << "  Float numeric limits: " << std::numeric_limits<float>::epsilon() << std::endl;
    float precision_fl = pow(2, -(p));
    std::cout << "  Calculated float result: " << precision_fl << std::endl;

    e = 11, p = 52;
    std::cout << "  Double numeric limits: " << std::numeric_limits<double>::epsilon() << std::endl;
  
    double precision_dl = pow(2, -(p));
    std::cout << "  Calculated double result: " << precision_dl << std::endl;

}

double gamma_calc(double beta) {
    return 1.00 / sqrt(1 - pow(beta, 2));
}
double gamma_eps(double epsilon) {
    return 1.00 / sqrt(epsilon * (2 - epsilon));
}

void exercise_2() {
    std::cout << "\nProblem 2" << std::endl;
    std::cout << "Please input number of stretch-factors to calculate (beta = 0.9,0.99,0.999,...): " << std::endl;
    int num_gamma;
    std::cin >> num_gamma;
    
    for (int i = 0; i < num_gamma; i++) {
        double beta = 1.0 * pow(10, -(i + 1));
        double epsilon = 1.0 - beta;
        std::cout << "Beta: " << beta << "\nEpsilon: " << epsilon << std::endl;
        std::cout << "Original gamma calc: " << std::setprecision(10) << gamma_calc(beta) << std::endl;
        std::cout << "Epsilon gamma calc: " << std::setprecision(10) << gamma_eps(epsilon) << std::endl;
    }


    double max_beta = 0.0;
    double frac_error = 1E-3; 
    double gamma_frac_err = 0;

    while (gamma_frac_err < frac_error) {
        double max_gamma[2] = {gamma_calc(max_beta), gamma_eps(max_beta)}; 
        gamma_frac_err = stats_calc::frac_error(max_gamma[0], max_gamma[1]);
        
        max_beta += 1E-6;
    }    
    std::cout << "Maximum value of beta with fractional error < 1E-3: " << std::setprecision(10) << max_beta << std::endl;
}

double cplx_tri_area(const std::complex<double> A, const std::complex<double> B, 
                     const std::complex<double> C) {
    return 0.5 * ( A.real() * B.imag() + B.real() * C.imag() 
                 + C.real() * A.imag() - A.imag() * B.real() 
                 - B.imag() * C.real() - C.imag() * A.real() );
}

std::complex<double> cplx_trans(const std::complex<double> X, const std::complex<double> O ) {
    return X + O;
}

std::complex<double> cplx_rot(bool dir_cclk, bool radian, double angle, const std::complex<double> Vec) {
    if (!radian) {
        // Convert to  radians if input is in degrees
        angle = angle * M_PI / 180.0;
    }
    if (!dir_cclk) {
        angle = -angle;
    }
    std::complex<double> r = std::exp(std::complex<double> (0, angle));
    return Vec * r;
}

void exercise_3() {
    std::complex<double> A (3,7);
    std::complex<double> B (3,2);
    std::complex<double> C (10, 2);

    // Problem 3.1
    double ex3_1 = cplx_tri_area(A, B, C);
    std::cout << "\nEx 3.1: \nArea of triangle = " << ex3_1 << std::endl;
    
    // Problem 3.2
    std::complex<double> O (4,5);
    std::complex<double> t_A = cplx_trans(A, O);
    std::complex<double> t_B = cplx_trans(B, O);
    std::complex<double> t_C = cplx_trans(C, O);

    std::cout << "Translated Vectors: " << std::endl;
    std::cout << "  A' = " << t_A       << std::endl;
    std::cout << "  B' = " << t_B       << std::endl;
    std::cout << "  C' = " << t_C       << std::endl;

    std::cout << "Area ABC' : " << cplx_tri_area(t_A, t_B, t_C) << std::endl;
    
    
    // Problem 3.3 
    std::complex<double> rot_A = cplx_rot(0, 0, 45, t_A);
    std::complex<double> rot_B = cplx_rot(0, 0, 45, t_B);
    std::complex<double> rot_C = cplx_rot(0, 0, 45, t_C);

    std::cout << "Rotated Vectors: " << std::endl;
    std::cout << "  A\" = " << rot_A  << std::endl;
    std::cout << "  B\" = " << rot_B  << std::endl;
    std::cout << "  C\" = " << rot_C  << std::endl;
    std::cout << "Area ABC\" : " << cplx_tri_area(rot_A, rot_B, rot_C) << std::endl;
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




