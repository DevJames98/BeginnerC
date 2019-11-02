/* Hello World program */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(argc,  argv[])
{
    //convert string to actual data type --> if string is int, convert arg2 to int, etc. 
    if(argc != 2){
        
        printf("Error - wrong # of cmd line args \n");
        return -1;
    }
    
    
    if(strcmp("string", argv[1]) == 0){
        printf("String: %s\n" , argv[1]);
    }
    else if(strcmp("int", argv[1]) == 0){
        printf("Int: %d\n" , argv[1]);
    }
    else if(strcmp("float", argv[1]) == 0){
        printf("Float: %f\n" , argv[1]);
    }
    else if(strcmp("double", argv[1]) == 0){
        printf("Double: %lf\n" , argv[1]);
    }
    else if(strcmp("long", argv[1]) == 0){
        printf("Long: %ld\n" , argv[1]);
    }
    else if(strcmp("char", argv[1]) == 0){
        printf("Char: %c\n" , argv[1]);
    }
    else{
        printf("Invalid data type.\n");
    }
    
    
    
    
    
    
    
    
    return 0;
    
    
}
