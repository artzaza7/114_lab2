#include<stdio.h>
int main()
{
    int day;
    int month;
    int fixmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d",&day);
    scanf("%d",&month);
    if(fixmonth[month-1]==31)
    {
        if(day+3>7)
        {
            day=day+3-7;
            printf("%d",day);
        }
        else
        printf("%d",day+3);
    }
    else if(fixmonth[month-1]==30)
    {
        if(day+2>7)
        {
            day=day+2-7;
            printf("%d",day);
        }
        else
        printf("%d",day+2);
    }
    else
    {
        printf("%d",day);
    }
    return 0;
}