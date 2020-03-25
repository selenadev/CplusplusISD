//В заданном массиве вещественных чисел подсчитать количество чисел, являющихся целыми
//Пример :
//Исходный массив : {1.67, 32.0, 3.0, 7.12, -4.1, -8.0}
//Ожидаемый результат : 3

#include<iostream>
using namespace std;

void integ(int arr[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			sum++;
	}
	std::cout << sum << std::endl;
}
int main()
{
	int arr[]{ 1.67,32.0, 3.0, 7.12, -4.1, -8.0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	integ(arr, size);
	return 0;
}

