// sum_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SumArray.h"


int _tmain(int argc, _TCHAR* argv[])
{
	std::ifstream in;
	in.open("input.txt");
	if (!in.is_open())
	{
		std::cout << "file not found" << std::endl;
		return 1;
	}

	int multiplicity;
	in >> multiplicity;

	int count;
	in >> count;

	int* arr = new int[count];

	for (int i = 0; i < count; ++i)
		in >> arr[i];

	in.close();

	int sum = CSumArray::SumArrayMultiplicity(multiplicity, count, arr);
	std::cout << sum;
	std::ofstream out("output.txt", std::ios_base::app);
	out << '\n';
	out << sum;
	out.close();

	return 0;
}
