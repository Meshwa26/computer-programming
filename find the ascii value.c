#include<stdio.h>
void main()
{
    char x[50];
    int i;
    printf("enter the name \n");
    gets(x);
    printf("name is %s \n",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>='a'&&x[i]<='z')
        {
            x[i]=x[i]-32;
        }
        else if(x[i]>='A'&&x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
    }
    printf("the string changed to %s",x);
}
