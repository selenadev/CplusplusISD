//Для заданного массива целых чисел вывести на экран индекс наименьшего четного числа
//Пример :
//Исходный массив : {10, 9, 13, 43, -7, 4, 13}
//Ожидаемый результат : 5

#include<iostream>

void ind(int arr[], int size)
{
	int min = 0;
	bool there = false;

	for (int i = 0; i < size; i++)
	{
		std::cout << i << " элемент массива:" << arr[i] << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0)
			for (int j = 0; j < size; j++)
			{
				if (min == 0 && !there)
				{
					min = arr[i];
					if (arr[i] == 0)
						there = true;
				}
				if (arr[j] % 2 == 0 && arr[i] < arr[j] && arr[i] < min)
					min = i;
			}
	}
	std::cout << "\nИндекс минимального элемента массива: " << min << std::endl;
}
int main()
{
	setlocale(0, "rus");

	int arr[]{ 10, 9, 13, 43, -7, 4, 13 };
	int size = sizeof(arr) / sizeof(arr[0]);
	ind(arr, size);
	return 0;
}