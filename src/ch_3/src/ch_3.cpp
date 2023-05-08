#include <iostream>
#include <eigen3/Eigen/Dense>
#include <thread>
/*
    Find \vec{x} such that \Mat{A} \dot \vec{x} = \vec{y}
*/
class linalg_threader {
    public:
        void ex_matrix_inverse(Eigen::VectorXd V, Eigen::MatrixXd M) {
            std::cout << "Matrix Inversion Example: " << std::endl;
            Eigen::MatrixXd AInv = M.inverse();
            std::cout << AInv*V << std::endl;
        }
        void ex_eigensolver(Eigen::MatrixXd M) {
            std::cout << "Eigensolver Example: " << std::endl;
            Eigen::EigenSolver<Eigen::MatrixXd> s(M);
            Eigen::MatrixXcd vec=s.eigenvectors();
            Eigen::MatrixXcd val=s.eigenvalues();

            std::cout << val << std::endl;
            std::cout << vec << std::endl;
        }

};






int main(int argc, char **argv) {
    //vector 
    Eigen::VectorXd Y(2);
    Y(0)= 1.0;
    Y(1)= 3.0;   
    //matrix A
    Eigen::MatrixXd A(2,2);
    A(0,0)= 1.0; 
    A(0,1)=2.0;
    A(1,0)= 4.0; 
    A(1,1)=9.0;

    //matrix B
    Eigen::MatrixXd B(2,2);
    A(0,0)= 1.0; 
    A(0,1)=2.0;
    A(1,0)= 2.0; 
    A(1,1)=9.0;

    //run examples
    
    
    
    linalg_threader alg_threader; 
    
    std::thread t1(&linalg_threader::ex_matrix_inverse, alg_threader, Y, A);
    t1.join(); 
    std::thread t2(&linalg_threader::ex_eigensolver, alg_threader, A);
    t2.join(); 
    std::thread t3(&linalg_threader::ex_eigensolver, alg_threader, B);
    t3.join();
    std::cout << "Threads complete" << std::endl; 
    alg_threader.ex_eigensolver(B);
    
    return 0;
}