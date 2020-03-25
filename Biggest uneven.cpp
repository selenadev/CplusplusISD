//Для заданного массива целых чисел вывести на экран значение наибольшего нечетного числа
//Пример :
//Исходный массив : {10, 9, 13, 43, -7, 4, 13}
//Ожидаемый результат : 43

#include<iostream>

void maxeven(int arr[], int size)
{
	int max = 0;
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
	std::cout << max;
}
int main()
{
	int arr[]{ 10, 9, 13, 43, -7, 4, 13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	maxeven(arr, size);
	return 0;
}