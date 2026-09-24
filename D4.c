#include <stdio.h>

int main(){
    int score;
    printf("Please input your score!\n");
    scanf("%d",&score);
    if(score>=90&&score<=100){
        printf("Grade A\n");
    }else if(score>=80&&score<90){
        printf("Grade B\n");
    }else if(score>=70&&score<80){
        printf("Grade C\n");
    }else if(score>=60&&score<70){
        printf("Grade D\n"); 
    }else if(score<60&&score>=0){
        printf("You failed the exam!Please try again!\n");
    }else {
        printf("invalid input!\n");
    }
    return 0;
}