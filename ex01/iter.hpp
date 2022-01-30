//
// Created by Регина on 30.01.2022.
//

#ifndef CPP_07_ITER_HPP
#define CPP_07_ITER_HPP
#include <iostream>

template <typename T>
void print(T val)
{
    std::cout << val << std::endl;
};

template <typename T, typename Tarr>
void iter(Tarr *arr, T lenght, void (*func)(T &t))
{
    for (T i = 0; i < lenght; i++)
        func(arr[i]);
}
#endif //CPP_07_ITER_HPP
