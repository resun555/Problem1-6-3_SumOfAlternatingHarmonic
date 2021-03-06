// Problem1-6-3_SumOfAlternatingHarmonic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	double sum = 0.;
	for (size_t i = 0; i < 100; i++)
	{
		switch (i % 2)
		{
		case 0:
			sum += 1. / (i + 1);
			break;
		case 1:
			sum += -1. / (i + 1);
			break;
		default:
			break;
		}
	}
	printf("%lf", sum);
	printf("\n");
	sum = 0.;
	int power = 1;
	for (size_t i = 0; i < 100; i++)
	{
		sum += (double)power / (i + 1);
		power *= -1;
	}
	printf("%lf", sum);
	return 0;
}

