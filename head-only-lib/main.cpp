#include <iostream>

void say_hello(){
    std::cout << "Hello, from head-only-lib!\n";
}
#include <head_onlys/utils.hpp>
int main(){
    say_hello();

    std::cout << min(1,2,3,4,5,56) <<"\n";
}