/*
Нужно написать шаблонный класс для двумерного массива (таблицы). Все ячейки таблицы имеют один и тот же тип данных T.

Требования к классу:

Должен быть конструктор, получающий на входе два целых числа — количество строк и столбцов соответственно.
Должны быть константная и неконстантная версии оператора [], возвращающего массив, к которому снова можно применить оператор [].
Нужно, чтобы работали конструкции вида:
* cout << table[i][j]; * table[i][j] = value;.

Должна быть константная функция Size, возвращающая размер таблицы.
*/
#include "Task2.h"

int main()
{
	int raws{ 2 };
	int columns{ 3 };
	Table<int> test(raws, columns);
    //test[0][0] = 4;
	//std::cout << test[0][0];
	initMatrix(test, raws, columns);
	Table<int> t2(test);
	//t2 = test;
	printMatrix(test, raws, columns);
	std::cout << "Table has " << test.Size().first << " raws and " << test.Size().second << " columns.\n";

	return EXIT_SUCCESS;
}
