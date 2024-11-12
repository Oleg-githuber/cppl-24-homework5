#pragma once

class MyFunctor
{
private:
	int sum_{};
	int count_{};

public:
	int get_sum()
	{
		return sum_;
	}

	int get_count()
	{
		return count_;
	}

	void operator()(int number)
	{
		if (!(number % 3))
		{
			++count_;
			sum_ += number;
		}
	}
};