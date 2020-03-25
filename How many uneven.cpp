//Подсчитать количество нечетных чисел в заданном массиве целых чисел.
//Пример:
//Исходный массив : {1, 78, 5, 34, 7, -4, -13}
//Ожидаемый результат : 4

#include<iostream>
using namespace std;

void amount(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 != 0)
			sum++;
	}
	std::cout << sum << std::endl;
}
int main()
{
	int arr[]{ 1, 78, 5, 34, 7, -4, -13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	amount(arr, size);
	return 0;
}