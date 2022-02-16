#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,e;
    scanf("%f%f%f",&a,&b,&c);
    if(1<=a<=b<=c<=100)
    s=(a+b+c)/2;
    e=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",e);
    return 0;
}