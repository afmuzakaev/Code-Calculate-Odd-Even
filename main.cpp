#include <iostream>

int main() {
    int N;
    std::cout << "Enter a positive integer: ";
    std::cin >> N;
    
    if (N % 2 == 0) {
        std::cout << "even" << std::endl;
    } else {
        std::cout << "odd" << std::endl;
   
