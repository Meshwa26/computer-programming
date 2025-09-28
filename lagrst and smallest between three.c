#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        if(a>c)
       {
            printf("the lagest number is %d \n",a);
            if(b>c)
            {
                printf("the smallest number is %d \n",c);

            }
            else
            {
                printf("the smallest number is %d \n",b);

            };

       }
       else
       {

            printf("the smallest number is %d \n",a);

       };
    }
    else
    {
        if(b>c)
        {
            printf("the largest number is %d \n",b);
            printf("the smallest number is %d \n",a);

        }
        else
        {
            printf("the smallest number is %d \n",a);
            printf("the largest number is %d \n",c);
        };
    };
}
