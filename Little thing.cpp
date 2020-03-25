//Для заданного массива вещественных чисел вывести на экран абсолютную величину дробной части наименьшего числа
//Пример :
//Исходный массив : {1.67, 32.0, 3.0, 7.12, -4.1, -8.09}
//Ожидаемый результат : 0.09

#include<iostream>

//stl
void abs(double arr[], double size)
{
	double min = 0;
	double res = 0;
	bool there = false;
	double intpart = 0;
	double fractpart = 0;
	for (int i = 0; i < size; i++)
	{
		std::cout << i << " элемент массива:" << arr[i] << std::endl;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (min == 0 && !there)
			{
				min = arr[i];
				if (arr[i] == 0)
					there = true;
			}
			if (arr[i] < arr[j] && arr[i] < min)
				min = arr[i];
		}
	}
	fractpart = modf(min, &intpart);
	res = abs(fractpart);
	std::cout << res << std::endl;
}
int main()
{
	setlocale(0, "rus");

	double arr[]{ 1.67, 32.0, 3.0, 7.12, -4.1, -8.09 };
	double size = sizeof(arr) / sizeof(arr[0]);
	abs(arr, size);
	return 0;
}
