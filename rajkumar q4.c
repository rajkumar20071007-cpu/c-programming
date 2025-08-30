#include <stdio.h>
#include <conio.h>
int main()
{
	char word [50];
	printf("enter a word:");
	scanf("%[^\n],word",word);
	printf("%s is entered word",word);
	return 0;
}