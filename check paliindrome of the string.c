void main()
{
    char x[50];

    int i,j,k,f=0;
    printf("enter the strings \n");
    scanf("%s",x);
    for(i=0;x[i]!='\0';i++);
    printf("length is %d \n",i);

    for(j=0,k=i-1;j<i/2;j++,k--)
    {
        if(x[j]==x[k])
        {
        }
        else
        {
            f=1;
            break;
        }

    }
    if(f==1)
    {
        printf("not a pallindrome \n");
    }
    else
    {
        printf("pallindrome \n");
    }


}
