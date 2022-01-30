//
// Created by Регина on 30.01.2022.
//

#include "whatever.hpp"
#include <iostream>


int main()
{
    float a = 0.6f, b = 0.9f;
    std::cout << "a " << a << " b " << b << std::endl;
    std::cout << "min " << min(a, b) << std::endl;
    std::cout << "max " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "SWAP" << std::endl;
    std::cout << "a " << a << " b " << b << std::endl;

    std::cout << "-----------------------------" << std::endl;

    int a = 6, b = 9;
    std::cout << "a " << a << " b " << b << std::endl;
    std::cout << "min " << min(a, b) << std::endl;
    std::cout << "max " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "SWAP" << std::endl;
    std::cout << "a " << a << " b " << b << std::endl;

    std::cout << "-----------------------------" << std::endl;
    double a = 0.6, b = 0.9;
    std::cout << "a " << a << " b " << b << std::endl;
    std::cout << "min " << min(a, b) << std::endl;
    std::cout << "max " << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "SWAP" << std::endl;
    std::cout << "a " << a << " b " << b << std::endl;
}