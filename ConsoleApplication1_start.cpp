#include <stdio.h> 
#include <string.h> 
#include <locale.h> 

int main(void)
{
	setlocale(LC_ALL, "rus");
	char str1[100];
	char str[100];
	printf("����� ������:");
	gets_s(str);
	int k = strlen(str);
	printf("\n����� ��������� ������: %i ��������.\n", k);
	

	return 0;

}



