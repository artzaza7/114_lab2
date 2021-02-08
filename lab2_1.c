#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c); 
    int sum=a+b+c;
    if(sum>=80&&sum<=100)
    printf("A");
    else if(sum>=75&&sum<=79)
    printf("B");
    else if(sum>=70&&sum<=74)
    printf("B+");
    else if(sum>=65&&sum<=69)
    printf("C");
    else if(sum>=60&&sum<=64)
    printf("C+");
    else if(sum>=55&&sum<=59)
    printf("D");
    else if(sum>=50&&sum<=54)
    printf("D+");
    else 
    printf("F");
    return 0;
}