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
		find_min_max(nums, N, max, min);

		//���������� �������� ������������� � ������������ ���������
		int index_max = NULL, index_min = NULL;
		find_min_max_index(nums, N, min, max, index_max, index_min);

		//������������ ��������� ����� ������������ � �����������
		product_between(nums, N, index_max, index_min, max, min);

		//���������� ������� ��������� ��� ������� ��������
		compaction(nums, N);
	}
	else
	{
		cout << "������!!!" << endl;
	}
	return 0;
}