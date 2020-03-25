//Для заданной строки подсчитать количество символов, обозначающих цифры.
//Пример:
//Исходная строка : "We started to learn C++ in 2019 and attended 5 lessons."
//Ожидаемый результат : 5

#include<iostream>
#include<string>
#include <cctype> 

int count(std::string str)
{
	int c = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 48 || str[i] == 49 || str[i] == 50 || str[i] == 51 || str[i] == 52 || str[i] == 53 || str[i] == 54 || str[i] == 55 || str[i] == 56 || str[i] == 57)
			c++;
	}
	return  c;
}
int main()
{
	std::string str = "We started to learn C++ in 2019 and attended 5 lessons.";
	std::cout << count(str);

}

//stl
int count(std::string str)
{
	int c = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
			c++;
	}

	return  c;
}
int main()
{
	std::string str = "We started to learn C++ in 2019 and attended 5 lessons.";
	std::cout << count(str);

}