#include<stdio.h>
void main()
{
    int x[10],l,s;
    printf("enter the numbers \n");
    for(int i=0;i<10;i++)
    {
        printf("number %d \n",i+1);
        scanf("%d",&x[i]);

    }
    l=s=x[0];
    for(int i=0;i<10;i++)
    {
        if(x[i]>l)
        {
            l=x[i];
        }
        if(x[i]<s)
        {
            s=x[i];
        }

    }
    printf("the largest number is %d \n",l);
    printf("the smallest number is %d \n",s);


}
