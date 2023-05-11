#ifndef CH_2_H
#define CH_2_H


#include <complex>


/* Text Example Definitions*/
void print_data_sizes();

/* Problem 2 helper funcs*/
double gamma_calc(double beta);
double gamma_eps(double epsilon);

/* Problem 3 helper funcs*/
double cplx_tri_area(const std::complex<double> A, const std::complex<double> B, 
                     const std::complex<double> C); 
std::complex<double> cplx_trans(const std::complex<double> X, const std::complex<double> O );
std::complex<double> cplx_rot(bool dir_cclk, bool radian, double angle, const std::complex<double> Vec);


/* Because why not*/
void exercise_1(); 
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exercise_6();
void exercise_7();
void exercise_8();
void exercise_9();
void exercise_10();


#endif