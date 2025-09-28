#include<stdio.h>
void main()
{
    int i,n;
    char x[50];
    printf("enter the name \n");
    scanf("%s",&x);
    printf("enter the number of times to be repeated \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%s \n",x);
    }
}

