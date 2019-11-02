#include<stdio.h>


addToEnd(int* newA, int index, int val){
    
    //for(int )
    //a[index] = val
    b* = (newA*) realloc(b*)
    
}






int main(void)
{
    int numVals = 5;
    int *a = (int*) malloc(numVals * sizeof(int));
    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 2;
    a[4] = 4;
    
    int *newArray = addToEnd(a, 5, 99); //array, index, value
    numVals++;
    
    for(int i=0; i<numVals; i++){
        printf("a[%d]: %d\n", i, newArray[i]);
    }
    
    free(newArray);
    
    return 0;

}
