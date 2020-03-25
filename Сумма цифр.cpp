//Для заданного массива целых чисел вывести на экран сумму цифр наибольшего нечетного числа
//Пример :
//Исходный массив : {10, 9, 13, 43, -7, 4, 13}
//Ожидаемый результат : 7

#include<iostream>

void summ(int arr[], int size)
{
	int max = 0;
	int sum = 0;
	bool there = true;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			for (int j = 0; j < size; j++)
			{
				if (max == 0 && !there)
				{
					max = arr[i];
					if (arr[i] == 0)
						there = true;
				}
				if (arr[j] % 2 != 0 && arr[i] > arr[j] && arr[i] > max)
					max = arr[i];
			}
	}
	while (max != 0)
	{
		sum += max % 10;
		max /= 10;
	}
	std::cout << sum;
}
int main()
{
	int arr[]{ 10, 9, 13, 43, -7, 4, 13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	summ(arr, size);
	return 0;
}
