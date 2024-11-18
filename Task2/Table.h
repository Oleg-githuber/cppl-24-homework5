#pragma once

template<class T>
class Table
{
private:
	int raws_{};	// ���������� �����
	int columns_{};	// ���������� ��������
	T** table{ nullptr };	// ��������� �� �������

	// ����������� ��������� �������
	T** copyTable(const Table<T>& oldTable) const
	{
		T** newTable{ new T * [oldTable.getRaws()]};
		for (int raw{}; raw < oldTable.getRaws(); ++raw)
		{
			newTable[raw] = new T[oldTable.getColumns()];
			for (int column{}; column < oldTable.getColumns(); ++column)
			{
				newTable[raw][column] = oldTable[raw][column];
			}
		}
		return newTable;
	}

	// ������������ ������
	void deleteTable()
	{
		for (int raw{}; raw < raws_; ++raw)
		{
			delete[] table[raw];
		}
		delete[] table;
	}
	
public:
	Table(int raws, int columns) : raws_{ raws }, columns_{ columns }, table{new T*[raws]}
	{
		for (int raw{}; raw < raws_; ++raw)
		{
			table[raw] = new T[columns_];
		}
	}

	Table(const Table<T>& other) : Table{ other.getRaws(), other.getColumns() }
	{
		copyTable(other);
	}

	int getRaws() const
	{
		return raws_;
	}

	int getColumns() const
	{
		return columns_;
	}

	// ������ �������
	std::pair<int, int> Size()
	{
		return std::pair<int, int>(raws_, columns_);
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
	
	// ���������� ��������� =
	Table<T> operator=(const Table<T>& other)
	{
		T** newTable{ copyTable(other) };
		deleteTable();
		raws_ = other.getRaws();
		columns_ = other.getColumns();
		table = newTable;
	}

	~Table()
	{
		deleteTable();
	}
};