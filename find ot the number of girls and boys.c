#include<stdio.h>
void main()
{
    char x;
    int b=0,g=0;

    printf("enter the sex code of 50 students (f for females and m for males) \n");
    for(int i=1;i<=10;i++)
    {
        printf("students %d \n",i);
        scanf("%c",&x);

        if(x=='m')
        {
            b++;
        }
        else if (x=='f')
        {
            g++;
        }
        else
        {
            printf("invalide input enter the correct code \n");
            i--;

        }

    }
    printf("the number of girls are %d \n",g);
    printf("the number of boys are %d \n",b);


}
