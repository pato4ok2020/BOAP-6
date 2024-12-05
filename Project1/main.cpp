#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <stdlib.h>
#include "Unit.h"

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N;
	char answ;
	cout << "������� ���������� ��������� �������: ";
	cin >> N;
	cout << "������ �������� ��������?(y/n)" << endl;
	cin >> answ;
	//������� ����� N
	bool check_N = true;
	if (N <= 0)
	{
		check_N = false;
	}
	if (check_N)
	{
		double* nums = new double[N];
		switch (answ)
		{
		case 'y':
			create_array_random(nums, N);
			break;
		case 'n':
			create_array(nums, N);
			break;
		}
		//����� ������������� ��������� �������
		sum_negative_element(nums, N);
		//����� ������������� �������� � ������������
		double max = nums[0], min = nums[0];
		for (int i = 1; i < N; i++)
		{
			if (*(numsPtr + i) > max)
			{
				max = *(numsPtr + i);
			}

			if (*(numsPtr + i) < min)
			{
				min = *(numsPtr + i);
			}
		}
		//���������� �������� ������������� � ������������ ���������
		int index_max = NULL, index_min = NULL;
		if (max != min)
		{
			for (int i = 0; i < N && (index_max == NULL || index_min == NULL) ; i++)
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
		//������������ ��������� ����� ������������ � �����������
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
				res *= *(numsPtr + i);
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
				res *= *(numsPtr + i);
			}
			cout << "������������ ������� �������: " << max << endl;
			cout << "����������� ������� �������: " << min << endl;
			cout << "������������ ��������� ������� ����� ����������� � ������������: " << res << endl;
		}
		//���������� ������� ��������� ��� ������� ��������
		int counter = 0;
		for (int j = 0, i = 0; j < N; j++)
		{
			if (nums[j] != 0)
			{
				*(nums + i) = *(nums + j);
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
	else
	{
		cout << "������!!!" << endl;
	}
	return 0;
}