//��� �������� ������ ������� �� ����� ��� �� ������ � ������� ��������.
//������:
//�������� ������ : "This is C++"
//��������� ��������� : "THIS IS C++"

#include<iostream>
#include <cctype> 

//stl
void reg(char* pstr)
{
	int i = 0;
	char c;
	while (pstr[i])
	{
		c = pstr[i];
		std::cout << (char)toupper(c);
		i++;
	}
}
int main()
{

	char str[] = "This is C++";
	char* pstr = str;
	reg(pstr);
	return 0;
}