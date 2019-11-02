/* Hello World program */

#include<stdio.h>

int main()
{
    //printf("Hello World\n");
    //return 0;
    
    int num;
    
    printf("Enter an integer: ");
    scanf("%d" , &num);
    
    if(num < 10){
        printf("Too Small!\n");       
    }
    else if(num > 20){
        printf("Too Large!\n");
    }
    else{
        printf("%d \n", num);
    }
    
    return 0;
}
