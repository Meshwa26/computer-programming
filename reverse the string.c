#include<stdio.h>
void main()
{
    char x[50];
    char r[50];
    int i,j,k;
    printf("enter the strings \n");
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++);
    printf("length is %d \n",i);


    for(j=0,k=i-1;k>=0;j++,k--)
    {
        r[j]=x[k];

    }
  //  r[j]='/0';
    printf("%s",r);

}
