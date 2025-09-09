#include <stdio.h>
int main()
{
    char a[50];
    printf("enter a two word");
    scanf("%[^\n]s",&a);
    printf("\"%s\"is entered words ",a);
    return 0;
}