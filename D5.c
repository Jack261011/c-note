#include <stdio.h>

int main(){
    int b=0;
    
    for(int a=1;a<101;a=a+1){
        b=b+a;
    }
    printf("b=%d\n",b);


    int n;
    int total=0;
    printf("Please input a positive integral\n");
    scanf("%d",&n);

    for(int c=1;c<n+1;c=c+1){
        total=total+c;
    }
    printf("total=%d\n",total);


    int m;
    int d=1;
    int t=0;
    printf("Please input a positive integral\n");
    scanf("%d",&m);
    while(d<m+1){
        t=t+d;
        d=d+1;
    }
    printf("total=%d\n",t);


    while(n>0){
        printf("%d ",n);
        n--;
    }


    int mul=1;
    int j=0;
    printf("\nPlease input a positive integral\n");
    scanf("%d",&j);
    while(j>0){
        mul=mul*j;
        j--;
    }
    printf("%d",mul);
}