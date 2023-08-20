#include <iostream>

int main(int argc, char const *argv[]) {
    
    decltype('A') var;
    std::cout << sizeof(var) << std::endl;

    return 0;
}