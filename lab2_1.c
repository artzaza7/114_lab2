#include<stdio.h>
int main()
{
    int num[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    int sum=num[1]+num[2]+num[3];
    if(sum<=49)
    {
        printf("F");
    }
    else if(sum<=54)
    {
        printf("D");
    }
    else if(sum<=59)
    {
        printf("D+");
    }
    else if(sum<=64)
    {
        printf("C");
    }
    else if(sum<=69)
    {
        printf("C+");
    }
    else if(sum<=74)
    {
        printf("B");
    }
    else if(sum<=79)
    {
        printf("B+");
    }
    else printf("A");
    return 0;
}