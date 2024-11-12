#pragma once

template<class T>
class Table
{
private:
	const int raws_{};	// Количество строк
	const int columns_{};	// Количество столбцов
	T** table{ nullptr };	// Указатель на таблицу
	
public:
	Table(int raws, int columns) : raws_{ raws }, columns_{ columns }, table{new T*[raws]}
	{
		for (int raw{}; raw < raws_; ++raw)
		{
			table[raw] = new T[columns_];
		}
	}

	// Размер таблицы
	size_t Size()
	{
		return raws_ * columns_;
	}

	// Перегрузка оператора []
	T* operator[](int raw) const
	{
		return table[raw];
	}

	
	T* operator[](int raw)
	{
		return table[raw];
	}
	

	~Table()
	{
		for (int raw{}; raw < raws_; ++raw)
		{
			delete[] table[raw];
		}
		delete[] table;
	}
};