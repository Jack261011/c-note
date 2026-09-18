#include <stdio.h>

int main(){
    int age = 20;
    float price = 459.99;
    double pai = 3.141592653;
    char firstname = 'z';
    int future_age = age+10;
    printf("%d %.2f %.9lf %c\n" , age , price , pai , firstname);
    printf("%d %d %d\n",sizeof(int) , sizeof(char) , sizeof(double));
    printf("%d\n",17/5);
    printf("%f\n", (17%5)/5.0);
    printf("%d" , future_age);
    
    return 0;

}