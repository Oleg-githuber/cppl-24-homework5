#pragma once

#include <iostream>
#include "Table.h"

// Инициализация массива integer
template<typename T>
void initMatrix(Table<T>& matrix, size_t raws, size_t columns)
{
	size_t count{};
	for (size_t raw{}; raw < raws; ++raw)
	{
		for (size_t column{}; column < columns; ++column)
		{
			matrix[raw][column] = static_cast<T>(count++);
		}
	}
}

// Вывод массива в консоль
template<typename T>
void printMatrix(Table<T>& matrix, size_t raws, size_t columns)
{
	for (size_t raw{}; raw < raws; ++raw)
	{
		for (size_t column{}; column < columns; ++column)
		{
			std::cout << (matrix[raw][column]) << ' ';
		}
		std::cout << '\n';
	}
}