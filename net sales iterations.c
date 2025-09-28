#include<stdio.h>
void main()
{
    float s,g;
    printf("enter the net sales \n");
    scanf("%d",&g);
    if(g>20000)
    {
       s=g-0.15*g;
       printf("the net sales are %f \n",s);
    }
    else if(g>10000)
    {
        s=g-0.1*g;
        printf("the net sales are %f \n",s);
    }
    else
    {
        s=g-0.05*g;
        printf("the net sales are %f \n",s);
    }

}
