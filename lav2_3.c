#include<stdio.h>
int main()
{
    int num[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    fflush(stdin);
    char rec[3];
    for(int i=0;i<3;i++)
    {
        scanf("%c",rec[i]);
    }
    if(rec[0]=='A')
    {
        if(rec[1]=='B')
        {
            printf("%d %d %d",rec[0],rec[1],rec[2]);
        }
        else
        {
            printf("%d %d %d",rec[0],rec[2],rec[1]);
        }
    }
    else if(rec[0]=='B')
    {
        if(rec[1]=='A')
        {
            printf("%d %d %d",rec[1],rec[0],rec[2]);
        }
        else
        {
            printf("%d %d %d",rec[1],rec[2],rec[0]);
        }
    }
    else if(rec[0]=='C')
    {
        if(rec[1]=='B')
        {
            printf("%d %d %d",rec[2],rec[1],rec[0]);
        }
        else
        {
            printf("%d %d %d",rec[2],rec[0],rec[1]);
        }
    }
    return 0;
}