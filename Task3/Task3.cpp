// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyFunctor.h"

int main()
{
    int arr[]{ 4, 1, 3, 6, 25, 54 };
    MyFunctor myFunctor;
    std::cout << "Elements of array:\n";
    for (size_t i{}; i < (sizeof(arr) / sizeof(arr[0])); ++i)
    {
        myFunctor(arr[i]);
        std::cout << arr[i] << ' ';
    }

    std::cout << "\ncount = " << myFunctor.get_count() << "\nsum = " << myFunctor.get_sum() << '\n';

    return EXIT_SUCCESS;
}

