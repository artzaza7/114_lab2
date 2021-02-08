#include<stdio.h>
int main()
{
    float tel;
    char ans;
    scanf("%c",&ans); fflush(stdin);
    scanf("%f",&tel);
    int new=tel;
    float money;
    //printf("%d",new);
    if(ans=='A')
    {
        money=200;
        new=new-money;
        new=new*3;
        printf("%.2f",(money+new));
    }
    else
    {
        money=400;
        new=new-money;
        money=300;
        new=new*2;
        printf("%.2f",(money+new));
    }
    return 0;
}