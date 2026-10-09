#include <stdio.h>

int main()
{
    int i=1;
    while(i<6)
    {
        int j=1;
        while(j<i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }


    int n=0;
    int m=1;
    printf("Please input the number of arrow\n");
    scanf("%d",&n);
    while(m<n+1)
    {
        int j=1;
        while(j<m+1)
        {
            printf("*");
            j++;
        }
        printf("\n");
        m++;
    }


    int arr=1;
    while(arr<10)
    {
        int col=1;
        while(col<arr+1)
        {
            printf("%d*%d=%d\t",col,arr,col*arr);
            col++;
        }
        printf("\n");
        arr++;
    }


    int x=1;
    while (x<6)
    {
        
        for (int y=5-x;y>0;y--)
        {
            printf(" ");
        }
        for (int z=1;z<2*x;z++)
        {
            printf("*");
        }
        for (int y=5-x;y>0;y--)
        {
            printf(" ");
        }
        printf("\n");
        x++;
    }
}

