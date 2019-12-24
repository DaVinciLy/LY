#include<stdio.h>
#define MAXLINE 50
int main()
{
    int a=0;
    int b=0;
    int c=0;
    char s[MAXLINE];
    while((s[c]=getchar())!=EOF)
    {
        if(s[c]=='\n')
        {
            break;
        }
        c++;
    }
    for(c=0;s[c]!='\n';c++)
    {
        if(s[c]=='A'||s[c]=='a')
        {
            a++;
        }
        if(s[c]=='0')
        {
            b++;
        }
    }
    printf("the number of a is:%d\n",a);
    printf("the number of 0 is:%d\n",b);
}