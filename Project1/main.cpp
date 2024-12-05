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

		//Сумма отрицательных элементов массива
		sum_negative_element(nums, N);

		//Поиск максимального элемента и минимального
		double max = nums[0], min = nums[0];
		find_min_max(nums, N, max, min);

		//Нахождение индексов максимального и минимального элементов
		int index_max = NULL, index_min = NULL;
		find_min_max_index(nums, N, min, max, index_max, index_min);

		//Произведение элементов между максимальным и минимальным
		product_between(nums, N, index_max, index_min, max, min);

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