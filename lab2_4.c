#include<stdio.h>
int main()
{
    char ans;
    int number;
    scanf("%c",&ans);
    scanf("%d",&number);
    if (ans>=65&&ans<='I')
    {
        if(number%2!=0)
        {
            if(number>=10)
            {
                if(number%10==5)
                {
                    printf("%c(^_^)/",92);
                }
                else 
                printf("(^_^)");
            }
            else
            {
                printf("(^_^)");
            }
        }
        else
        {
            printf("{@_@}");
        }
    }
    else if (ans>='J'&&ans<='R')
    {
        if(number%2!=0)
        {
            if(number>=10)
            {
                if(number%10==5)
                {
                    printf("%c(*o*)/",92);
                }
                else 
                printf("(*o*)");
            }
            else
            {
                printf("(*o*)");
            }
        }
        else
        {
            printf("{*v*}");
        }
    }
    else if(ans>='S'&&ans<='Z')
    {
        if(number%2!=0)
        {
            if(number>=10)
            {
                if(number%10==5)
                {
                    printf("%c(T_T)/",92);
                }
                else 
                printf("(T_T)");
            }
            else
            {
                printf("(T_T)");
            }
        }
        else
        {
            printf("{x_x}");
        }
    }
    return 0;
}