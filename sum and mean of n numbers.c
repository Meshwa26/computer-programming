#include<stdio.h>
void main()
{
    int x[10],s=0;
    float m;
    printf("enter the ten values \n");
    for (int i=0;i<10;i++)
    {
        printf("number %d \n",i+1);
        scanf("%d",&x[i]);
        s+=x[i];
    }
    m=s/10;
    printf("the sum is %d \n",s);
    printf("the mean is %f \n",m);
}

