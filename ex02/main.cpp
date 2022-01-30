#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**) {
    Array<int> numbers(MAX_VAL);
    int *mirror = new int[MAX_VAL];
    srand(time(NULL));

    //создает два массива и заполняет рандомными числами
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    // проверка конструктора копирования
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
// проверка на совпадение элементов в двух массивах
    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // пытается достучаться до элементов, которых нет
    try {
        numbers[-2] = 0;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception &e) {
        std::cerr << e.what() << '\n';
    }

    //заполняет другими значениями
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand();
    }
    delete[] mirror;//
    // проверка при подаче 0
    {
        int * a = new int[0];
        std::cout<<*a<<std::endl;
        Array<int> numbers(0);
        std::cout<<numbers[0]<<std::endl;
    }
    return 0;
}