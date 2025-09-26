#include<stdio.h>

void main()
{
    char x[20];
    int n=0;
    printf("enter the name \n");
    gets(x);
    printf("name is %s \n",x);
    for(int i=0;x[i]!='\0';i++)
    {
        n++;
    }
    printf("the length of the string is %d",n);



}

