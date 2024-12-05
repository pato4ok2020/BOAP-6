#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void sum_negative_element(double* nums, int N)
{
	double sum = 0;
	for (int i = 0; i < N; i++)
	{
		if (nums[i] < 0)
		{
			sum += nums[i];
		}
	}
	cout << "Сумма отрицательных элементов массива: " << sum << endl;
}