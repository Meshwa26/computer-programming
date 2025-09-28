#include<stdio.h>
void main()
{
    int x,p=0,n=0,z=0;
    printf("enter the numbers \n");
    for(int i=1;i<=10;i++)
    {
        printf("number %d \n",i);
        scanf("%d",&x);

        if(x>0)
        {
            p++;
        }
        else if(x<0)
        {
            n++;
        }
        else
        {
            z++;
        }

    }
    printf("the number of povitive value is %d \n",p);
    printf("the number of negative value is %d \n",n);
    printf("the number of zero value is %d \n",z);



}
