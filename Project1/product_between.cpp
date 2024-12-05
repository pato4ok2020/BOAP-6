#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void product_between(double* nums, int N, int &index_max, int &index_min, double &max, double &min)
{
	if (index_max == index_min)
	{
		cout << "Расположения максимального и минимального элементов совпадают" << endl;
		cout << "Максимальный и минимальный элемент равны: " << max << endl;
	}

	else if (index_max + 1 == index_min || index_min + 1 == index_max)
	{
		cout << "Максимальный элемент массива: " << max << endl;
		cout << "Минимальный элемент массива: " << min << endl;
		cout << "Между максимальным и минимальным элементом массива нет других элементов" << endl;
	}

	else if (index_min > index_max)
	{
		double res = 1;
		for (int i = index_max + 1; i < index_min; i++)
		{
			res *= nums[i];
		}

		cout << "Максимальный элемент массива: " << max << endl;
		cout << "Минимальный элемент массива: " << min << endl;
		cout << "Произведение элементов массива между максимальным и минимальным: " << res << endl;
	}

	else if (index_min < index_max)
	{
		double res = 1;
		for (int i = index_min + 1; i < index_max; i++)
		{
			res *= nums[i];
		}

		cout << "Максимальный элемент массива: " << max << endl;
		cout << "Минимальный элемент массива: " << min << endl;
		cout << "Произведение элементов массива между минимальным и максимальным: " << res << endl;
	}
}