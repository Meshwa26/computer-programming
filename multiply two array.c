#include<stdio.h>
void main()
{
     int a[2][2],b [2][2],c[2][2],i,j;
    printf("enter the number \n"); //input A

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements in the matrices are \n");
    for(int i=0;i<2;i++)
    {
        printf("|");
        for (int j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("|\n");
    }
    printf("enter the numbers");
    for(int i=0;i<2;i++)
    {

        for(int j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the elements in the matrices are \n");
   for(int i=0;i<2;i++)
    {
        printf("|");
        for (int j=0;j<2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("| \n");
    }
    printf("\n multiplication is \n ");
    for (int i=0;i<2;i++)
    {
        printf("|");
        for(int j=0;j<2;j++)
        {

            for(int k=0;k<2;k++)
            c[i][j]+=a[i][k]*b[k][j];
            printf("%d",c[i][j]);
        }
        printf("|\n");

    }

}
