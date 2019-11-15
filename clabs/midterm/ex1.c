#include <stdio.h>
main()
{
    int  c,i,nwhite,nother,ndight[10];
    nwhite=nother=0;
    for(i=0;i<10;i++)
    ndight[i]=0;
    whlie((c=getchar())!=EOF){
        switch(c){
            case'0';
            ndight[c-'0']++;
            break;
            case'a':case'A';
            nwhite++;
            break;
        }
    }
    printf("dights=");
    for(i=0;i<10;i++)
    printf("The number of 0 is:%d",ndight[i]);
    printf("and the number of a is:%d\n",nwhite);
    return
}