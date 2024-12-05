#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
void product_between(double* nums, int N, int index_max, int index_min, double max, double min)
{
	if (index_max == index_min)
	{
		cout << "������������ ������������� � ������������ ��������� ���������" << endl;
		cout << "������������ � ����������� ������� �����: " << max;
	}
	else if (index_max + 1 == index_min || index_min + 1 == index_max)
	{
		cout << "������������ ������� �������: " << max << endl;
		cout << "����������� ������� �������: " << min << endl;
		cout << "����� ������������ � ����������� ��������� ������� ��� ������ ���������" << endl;
	}
	else if (index_min > index_max)
	{
		double res = 1;
		for (int i = index_max + 1; i < index_min; i++)
		{
			res *= nums[i];
		}

		cout << "������������ ������� �������: " << max << endl;
		cout << "����������� ������� �������: " << min << endl;
		cout << "������������ ��������� ������� ����� ������������ � �����������: " << res << endl;
	}
	else if (index_min < index_max)
	{
		double res = 1;
		for (int i = index_min + 1; i < index_max; i++)
		{
			res *= nums[i];
		}
		cout << "������������ ������� �������: " << max << endl;
		cout << "����������� ������� �������: " << min << endl;
		cout << "������������ ��������� ������� ����� ����������� � ������������: " << res << endl;
	}
}