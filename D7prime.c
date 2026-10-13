#include <stdio.h>

int main()
{
    int n=0;
    printf("please input an integral number n\n");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("%d is not a prime number\n",n);
    }
    if(n==2)
    {
        printf("%d is a prime number\n",n);
    }

    for(int a=2;a<n;a++)
    {
        if(n%a==0)
        {
            printf("%d is not a prime number\n",n);
            break;
        }
        else if(n%a!=0&&a<n-1)
        {
            continue;
        }
        else if(n%a!=0&&a==n-1)
        {
            printf("%d is a prime number\n",n);
        }
    }
    return 0;

}