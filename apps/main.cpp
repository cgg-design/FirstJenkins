#include<iostream>
#include "my_lib.hpp"
#include "calc_add.hpp"
#include "calc_sub.hpp"
#include "calc_mul.hpp"



int main(){

    //in der CMake datei einen option definieren
	std::cout << "Print: " << print_hello_world() << std::endl;
    //cout_hello_world();
	std::cout << "Add: " << add_values(4,6) << std::endl;
	std::cout << "Sub: " << sub_values(6,4) << std::endl;
	std::cout << "Mul: " << mul_values(4,6) << std::endl;
    return 0;
}