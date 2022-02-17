#include<stdio.h>
int main()
{
    int num,s=0,a=1,temp,k;
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        k=temp%10;
        s=s+k;
        a=a*k;
        temp=temp/10;
    }
    if(s==a)
    printf("Spy Number");
    else
    printf("Not Spy Number");
    return 0;
}