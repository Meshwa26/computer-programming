#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the number \n");
    scanf("%d",&n);

    printf("factors of %d are ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d, ",i);
        }
    }
    printf("\n");
}
