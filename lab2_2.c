#include<stdio.h>
int main()
{
    float tel;
    char ans;
    scanf("%c",&ans); fflush(stdin);
    scanf("%f",&tel);
    float money;
    if(ans=='A')
    {
        money=tel;
        float new=money-200;
        new=new*3;
        printf("%.2f",199+new);
    }
    else
    {
        money=tel;
        float new=money-400;
        new=new*2;
        printf("%d",299+new);
    }
    return 0;
}