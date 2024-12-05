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
	cout << "Введите количество элементов массива: ";
	cin >> N;
	cout << "Ввести элементы рандомно?(y/n)" << endl;
	cin >> answ;
	//Провера числа N
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
		//Поиск максимального элемента и минимального
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
		//Нахождение индексов максимального и минимального элементов
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
		//Произведение элементов между максимальным и минимальным
		if (index_max == index_min)
		{
			cout << "Расположения максимального и минимального элементов совпадают" << endl;
			cout << "Максимальный и минимальный элемент равны: " << max;
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
				res *= *(numsPtr + i);
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
				res *= *(numsPtr + i);
			}
			cout << "Максимальный элемент массива: " << max << endl;
			cout << "Минимальный элемент массива: " << min << endl;
			cout << "Произведение элементов массива между минимальным и максимальным: " << res << endl;
		}
		//Уплотнение массива убиранием все нулевых символов
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
			cout << "Массив после уплотнения путем удаления нулевых символов: " << endl;
			for (int i = 0; i < N; i++)
			{
				cout << nums[i] << " ";
			}
			cout << "\n";
			cout << "Длинна нового массива: " << N << endl;
		}
		else
		{
			cout << "Весь массив состоит из нулей" << endl;
		}
	}
	else
	{
		cout << "Ошибка!!!" << endl;
	}
	return 0;
}