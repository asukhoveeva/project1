#include <stdio.h> 
#include <string.h> 
#include <locale.h> 


int proverka(char *str);

int main(void)
{
	setlocale(LC_ALL, "rus");
	char str1[100];
	char str[100];
	printf("����� ������:");
	gets_s(str);
	int k = strlen(str);
	printf("\n����� ��������� ������: %i ��������.\n", k);
	proverka(str);

	return 0;

}

int proverka(char *str)
{
	int a = 0, b = 0, c = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == '(')
		{
			a++;
		}
		if (str[i] == '[')
		{
			b++;
		}
		if (str[i] == '{')
		{
			c++;
		}
	}
	if (a == 0 && b == 0 && c == 0)
	{
		printf("\n�������� ������ ���.\n");
		return -1;
	}
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ')')
		{
			a--;
		}
		if (str[i] == ']')
		{
			b--;
		}
		if (str[i] == '}')
		{
			c--;
		}
	}
	if (a > 0 || b > 0 || c > 0)
	{
		printf("\n������ �������\n");
		return 0;
	}
	if (a == 0 && b == 0 && c == 0)
	{
		printf("\n������ �� �������\n");
		return 1;
	}
}