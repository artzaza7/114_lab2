#include<stdio.h>
int main()
{
    long long number;
    scanf("%lld",&number);
    int count=0;
    long long save;
    save=number;
    if(number==0)
    printf("Zero");
    else
    {
        while (save>0)
        {
        save=save/10;
        count++;
        }
        int box[count];
        for(int i=0;i<count;i++)
        {
            box[i]=number%10;
            number=number/10;
        }
        for(int i=count;i>0;i--)
        {
            switch(box[i-1])
            {
            case 0 : printf("Zero");
                     break;
            case 1 : printf("One");
                     break;
            case 2 : printf("Two");
                     break;
            case 3 : printf("Three");
                     break;
            case 4 : printf("Four");
                     break;
            case 5 : printf("Five");
                     break;
            case 6 : printf("Six");
                     break;
            case 7 : printf("Seven");
                     break;
            case 8 : printf("Eight");
                     break;
            case 9 : printf("Nine");
                     break;
            }
            if(i!=1)
                printf("-");
        }
    }
    return 0;
}