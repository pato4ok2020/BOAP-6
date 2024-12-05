#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void find_min_max_index(double* nums, int N, double &min, double &max, int &index_max, int &index_min)
{
	if (max != min)
	{
		for (int i = 0; i < N && (index_max == NULL || index_min == NULL); i++)
		{
			if (nums[i] == max)
			{
				index_max = i;
				for (int i = N - 1; i > -1; i--)
				{
					if (nums[i] == min)
						index_min = i;
				}
			}
			if (nums[i] == min)
			{
				index_min = i;
				for (int i = N - 1; i > -1; i--)
				{
					if (nums[i] == max)
						index_max = i;
				}
			}
		}

	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			if (nums[i] == max)
			{
				index_max = i;
			}
		}
		for (int i = N - 1; i > -1; i--)
		{
			if (nums[i] == max)
			{
				index_min = i;
			}
		}
	}
}