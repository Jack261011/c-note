#include <stdio.h>

int is_prime(int n);
void print_primes(int limit);

int main()
{
    int n,m=0;
    printf("please input an intergral\n");
    scanf("%d",&n);
    if (is_prime(n)==0)
    {
        printf("%d is not a prime number\n",n);
    }else
    {
        printf("%d is a prime number\n",n);
    }
    
    
    printf("please input a limit\n");
    scanf("%d",&m);
    print_primes(m);

}

int is_prime(int n)
{
    if(n<=1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }

    for(int a=2;a<n;a++)
    {
        if(n%a==0)
        {
            return 0;
        }
    }return 1;
}

void print_primes(int limit)
{

    for(int a=2;a<=limit;a++)
    {
        if (is_prime(a)==1)
        {
            printf("%d is a prime number\n",a);
        }
    }
}