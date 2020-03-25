//Подсчитать сумму нечетных чисел в заданном массиве целых чисел.
//Пример:
//Исходный массив : {1, 78, 5, 34, 7, -4, -13}
//Ожидаемый результат : 0

#include<iostream>

int summ(int arr[], int size)
{
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			c += arr[i];
	}
	return c;
}
int main()
{
	int arr[]{ 1, 78, 5, 34, 7, -4, -13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << summ(arr, size);
	return 0;
}