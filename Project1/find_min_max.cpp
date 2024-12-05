#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void find_min_max(double* nums, int N, double max, double min)
{
	for (int i = 1; i < N; i++)
	{
		if (nums[i] > max)
		{
			max = nums[i];
		}

		if (nums[i] < min)
		{
			min = nums[i];
		}
	}
}