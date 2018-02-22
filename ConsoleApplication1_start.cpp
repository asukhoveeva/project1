#include <stdio.h> 
#include <string.h> 
#include <locale.h> 

int main(void)
{
	setlocale(LC_ALL, "rus");
	char str1[100];
	char str[100];
	printf("Введи строку:");
	gets_s(str);
	int k = strlen(str);
	printf("\nДлина введенной строки: %i символов.\n", k);
	

	return 0;

}



