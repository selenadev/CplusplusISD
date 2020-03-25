//Для заданной строки подсчитать количество слов, обозначающих числа.
//Пример:
//Исходная строка : "We started to learn C++ in 2019 and attended 5 lessons."
//Ожидаемый результат : 2

#include<iostream>
#include<string>
#include <cctype> 

int count(std::string str)
{
	int c = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) && !isdigit(str[i + 1]))
			c++;
	}

	return  c;
}
int main()
{
	std::string str = "We started to learn C++ in 2019 and attended 5 lessons.";
	std::cout << count(str);

}