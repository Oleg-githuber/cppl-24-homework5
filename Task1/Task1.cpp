// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Task1.h"

int main()
{
    int iNumber{ 4 };
    std::cout << "for integer:\n" << iNumber << "^2 = " << sqrNumber(iNumber) << '\n';

    double dNumber{ 1.2 };
    std::cout << "\nfor double:\n" << dNumber << "^2 = " << sqrNumber(dNumber) << '\n';

    std::vector<int> iVector{ 1, 2, 3 };
    std::cout << "\nfor vector<int>( ";
    printVector(iVector);
    std::cout << "):\n";
    printVector(sqrNumber(iVector));

    std::vector<double> dVector{ 1.1, 1.2, 1.3 };
    std::cout << "\nfor vector<double>( ";
    printVector(dVector);
    std::cout << "):\n";
    printVector(sqrNumber(dVector));
    std::cout << '\n';

    return EXIT_SUCCESS;
}
