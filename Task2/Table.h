#pragma once

template<class T>
class Table
{
private:
	const int raws_{};	// ���������� �����
	const int columns_{};	// ���������� ��������
	T** table{ nullptr };	// ��������� �� �������
	
public:
	Table(int raws, int columns) : raws_{ raws }, columns_{ columns }, table{new T*[raws]}
	{
		for (int raw{}; raw < raws_; ++raw)
		{
			table[raw] = new T[columns_];
		}
	}

	// ������ �������
	size_t Size()
	{
		return raws_ * columns_;
	}

	// ���������� ��������� []
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