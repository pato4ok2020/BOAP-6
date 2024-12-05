#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void create_array_random(double* nums, int N)
{
	for (int i = 0; i < N; i++)
	{
		nums[i] = rand() % 10;
		cout << nums[i] << " ";
	}
}