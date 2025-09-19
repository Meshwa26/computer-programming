#include<stdio.h>
void main()
{
    int a[2][3],b [2][3],c[2][3],i,j;
    printf("enter the number \n"); //input A

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("the elements in the matrices are \n");
    for(int i=0;i<2;i++)
    {
        printf("|");
        for (int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("|\n");
    }
    printf("enter the numbers");
    for(int i=0;i<2;i++)
    {

        for(int j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the elements in the matrices are \n");
    for(int i=0;i<2;i++)
    {
        printf("|");
        for (int j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("| \n");
    }
    printf("\n Value after addition\n");
    for(int i=0;i<2;i++)
    {
        printf("|");
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("|\n");
    }

}
