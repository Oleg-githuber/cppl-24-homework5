#pragma once

#include <iostream>
#include<vector>

// ������ ��� ����������� �����
template<typename AnyType>
AnyType sqrNumber(AnyType element)
{
	return element * element;
}

// ������ ��� ��������
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

// ������ ��� ������ ������� � �������
template<typename AnyType>
void printVector(std::vector<AnyType> myVector)
{
	for (AnyType element : myVector)
	{
		std::cout << element << ' ';
	}
}