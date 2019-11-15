#include<stdio.h>
#include<stdlib.h>

int main(void){
    int n;
    int i=0;
    int a[100];
    int count=0;
    printf("give a positive number:\n");
    scanf("%d",&n);
    printf(":");
    while(n){
        a[i]=n%2;
        i++;
        n/=2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
        if(a[j]==1){
            count++;
        }
    }
    printf("\n\"1\"%d\n",count);
    system("pause");
    return 0;
}
