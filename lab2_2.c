#include<stdio.h>
int main()
{
    float tel;
    char ans;
    scanf("%c",&ans);
    scanf("%f",&tel);
    float sum=0;
    int new=tel;
    int kill=tel*100;
    kill=kill%100;
    if(ans=='A')
    {
        sum=sum+199;
        if(tel>200)
        {
            new=new-200;
            sum=sum+new*3;
            sum=sum+kill*3/60.0;
        }
    }
    else
    {
        sum=sum+299;
        if(tel>400)
        {
            new=new-400;
            sum=sum+new*2;
            sum=sum+kill*2/60.0;
        }
    }
    printf("%.2f",sum);
    return 0;
}