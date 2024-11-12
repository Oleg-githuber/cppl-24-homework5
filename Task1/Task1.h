#pragma once

#include <iostream>
#include<vector>

// Шаблон для примитивных типов
template<typename AnyType>
AnyType sqrNumber(AnyType element)
{
	return element * element;
}

// Шаблон для векторов
template<typename AnyType>
std::vector<AnyType> sqrNumber(std::vector<AnyType> myVector)
{
	std::vector<AnyType> newVector;
	for (AnyType element : myVector)
	{
		newVector.push_back(element * element);
	}
	return newVector;
}

// Шаблон для вывода вектора в консоль
template<typename AnyType>
void printVector(std::vector<AnyType> myVector)
{
	for (AnyType element : myVector)
	{
		std::cout << element << ' ';
	}
}