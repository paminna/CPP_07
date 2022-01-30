//
// Created by Регина on 30.01.2022.
//

#ifndef CPP_07_WHATEVER_HPP
#define CPP_07_WHATEVER_HPP

template <typename T>
T min(const T &one, const T &two)
{
    return one < two ? one : two;
}
template <typename T>
T max(const T &one, const T &two)
{
    return one > two ? one : two;
}

template <typename T>
void swap(T &one, T &two)
{
    T tmp = one;
    one = two;
    two = tmp;
}

#endif //CPP_07_WHATEVER_HPP
