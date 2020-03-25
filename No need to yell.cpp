//Для заданной строки вывести на экран эту же строку в нижнем регистре.
//Исходная строка : "Let's try to print THIS in lower case"
//Ожидаемый результат : "let's try to print this in lower case"

#include<iostream>
#include<cctype>

//stl
void reg(char* pstr)
{
	int i = 0;
	char c;
	while (pstr[i])
	{
		c = pstr[i];
		std::cout << (char)tolower(c);
		i++;
	}
}
int main()
{

	char str[] = "Let's try to print THIS in lower case";
	char* pstr = str;
	reg(pstr);
	return 0;
}