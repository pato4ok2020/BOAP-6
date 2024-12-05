#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void create_array_random(double* nums, int N)
{
	srand(time(0));
	int start = -10;
	int end = 10;
	for (int i = 0; i < N; i++)
	{
		nums[i] = rand() % (end - start + 1) + start;
		cout << nums[i] << " ";
	}
}