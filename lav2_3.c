#include<stdio.h>
int main()
{
    int num[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&num[i]);
    }
    int A,B,C;
    if(num[0]>num[1]&&num[0]>num[1])
    {
        if(num[1]>num[2])
        {
            C=num[0];
            B=num[1];
            A=num[2];
        }
        else
        {
            C=num[0];
            B=num[2];
            A=num[1];
        }
    }
    else if(num[1]>num[0]&&num[1]>num[2])
    {
        if(num[0]>num[2])
        {
            C=num[1];
            B=num[0];
            A=num[2];
        }
        else
        {
            C=num[1];
            B=num[2];
            A=num[0];
        }
    }
    else
    {
        if(num[0]>num[1])
        {
            C=num[2];
            B=num[0];
            A=num[1];
        }
        else
        {
            C=num[2];
            B=num[1];
            A=num[0];
        }
    }
    fflush(stdin);
    char rec[3];
    for(int i=0;i<3;i++)
    {
        scanf("%c",&rec[i]);
    }
    if(rec[0]=='A')
    {
        if(rec[1]=='B')
        {
            printf("%d %d %d",A,B,C);
        }
        else{
            printf("%d %d %d",A,C,B);
        }
    }
    else if(rec[0]=='B')
    {
        if(rec[1]=='A')
        {
            printf("%d %d %d",B,A,C);
        }
        else{
            printf("%d %d %d",B,C,A);
        }
    }
    else
    {
        if(rec[1]=='A')
        {
            printf("%d %d %d",C,A,B);
        }
        else{
            printf("%d %d %d",C,B,A);
        }
    }
    return 0;
}