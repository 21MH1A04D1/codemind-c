#include<stdio.h>
int main()
{
    int number,i=1,sum=0;
    scanf("%d",&number);
    while(i<=number)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
    return 0;
}