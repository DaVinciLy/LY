#include<stdio.h>
int main()
{
    unsigned long long int x,y,a,b;
    x=0;
    y=~x;
    printf("the min is:%llu\n",x);
    printf("the max is:%llu\n",y);
    a=1;
    b=0;
    while(a!=0)
    {
        a=a<<1;
        b++;
    }
    printf("unsigned long long int size is:%llu\n",b);
}