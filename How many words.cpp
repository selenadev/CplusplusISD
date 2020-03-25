//Подсчитать количество слов в строке.
//Пример:
//Исходная строка : "We are trying to count number of words in this text"
//Ожидаемый результат : 11

#include<iostream>
#include<string>

int number(std::string str)
{
	int c = 0;
	for (int i = 0; i <= str.size(); i++)
	{
		if (str[i] == 32 || str[i] == '\0')
		{
			c++;
		}
	}
	return c;
}
int main()
{
	std::string str = "We are trying to count number of words in this text";
	std::cout << number(str) << std::endl;
	return 0;
}