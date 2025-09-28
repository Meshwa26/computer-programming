#include<stdio.h>
void main()
{
    int x[10]={5,8,12,2,3,26,9,88,31,45};
    int s=0;
    float m;
    for (int i=0;i<10;i++)
    {
        s+=x[i];
    }
    m=s/10;
    printf("the sum is %d \n",s);
    printf("the mean is %f \n",m);
}
