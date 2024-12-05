#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void compaction(double* nums, int N)
{
	int counter = 0;
	for (int j = 0, i = 0; j < N; j++)
	{
		if (nums[j] != 0)
		{
			nums[i] = nums[j];
			counter++;
			i++;
		}
	}

	N = counter;
	if (counter != 0)
	{
		cout << "������ ����� ���������� ����� �������� ������� ��������: " << endl;
		for (int i = 0; i < N; i++)
		{
			cout << nums[i] << " ";
		}
		cout << "\n";
		cout << "������ ������ �������: " << N << endl;
	}
	else
	{
		cout << "���� ������ ������� �� �����" << endl;
	}
}