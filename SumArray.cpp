#include "stdafx.h"
#include "SumArray.h"


CSumArray::CSumArray()
{
}


CSumArray::~CSumArray()
{
}

int CSumArray::SumArrayMultiplicity(int multiplicity, int count, int* arr)
{
	int result = 0;
	for (size_t i = 0; i < count; i++)
	{
		if (arr[i] % multiplicity == 0)
			result += arr[i];
	}
	return result;
}