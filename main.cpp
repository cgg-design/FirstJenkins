#include<iostream>
#include <string>

using namespace std;

string print_hello(){
   return "Hello World!";
}

int main(int argc, char *argv[]){
   std::cout << print_hello() << std::endl;
   return 0;
}