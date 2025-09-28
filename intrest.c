#include<stdio.h>
void main()
{
    float i,p,n,r;
    printf("enter the principal value \n");
    scanf("%f",&p);
    printf("enter the intrest rate \n");
    scanf("%f",&r);
    printf("enterbthe time durations \n");
    scanf("%f",&n);

    i=(p*r*n)/100;

    printf("the intrest is %f \n",i);

}
