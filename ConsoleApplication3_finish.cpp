#include <stdio.h> 
#include <string.h> 
#include <locale.h> 

void invert(char *str, char *str1, int k);
int proverka(char *str);

int main(void)
{
	setlocale(LC_ALL, "rus");
	char str1[100];
	char str[100];
	printf("Введи строку:");
	gets_s(str);
	int k = strlen(str);
	printf("\nДлина введенной строки: %i символов.\n", k);
	proverka(str);
	invert(str, str1, k);
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
		printf("\nОткрытых скобок нет.\n");
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
		printf("\nБаланс нарушен\n");
		return 0;
	}
	if (a == 0 && b == 0 && c == 0)
	{
		printf("\nБаланс не нарушен\n");
		return 1;
	}
}

void invert(char *str, char *str1, int k)
{
	int j = k;
	for (int i = 0; i < strlen(str); i++)
	{
		str1[k - 1] = str[i];
		k--;
	}
	str1[j] = '\0';
	puts(str1);
	return;
}