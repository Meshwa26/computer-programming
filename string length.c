#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    printf("enter the name \n");
    gets(x);
    printf("name is %s",x);
    printf("the length of the string is %d",strlen(x));

}
