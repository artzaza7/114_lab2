#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c); 
    if(a+b+c>=80)
    printf("A");
    else if(a+b+c>=75)
    printf("B+");
    else if(a+b+c>=70)
    printf("B");
    else if(a+b+c>=65)
    printf("C+");
    else if(a+b+c>=60)
    printf("C");
    else if(a+b+c>=55)
    printf("D๙");
    else if(a+b+c>=50)
    printf("D");
    else 
    printf("F");
    return 0;
}