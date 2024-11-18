#pragma once

#include <iostream>
#include "Table.h"

// Инициализация массива integer
template<typename T>
void initMatrix(Table<T>& matrix, int raws, int columns)
{
	int count{};
	for (int raw{}; raw < raws; ++raw)
	{
		for (int column{}; column < columns; ++column)
		{
			matrix[raw][column] = static_cast<T>(count++);
		}
	}
}

// Вывод массива в консоль
template<typename T>
void printMatrix(Table<T>& matrix, int raws, int columns)
{
	for (int raw{}; raw < raws; ++raw)
	{
		for (int column{}; column < columns; ++column)
		{
			std::cout << (matrix[raw][column]) << ' ';
		}
		std::cout << '\n';
	}
}