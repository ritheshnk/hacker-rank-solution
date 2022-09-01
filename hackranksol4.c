#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    // Complete this function  
    /*we first need to create a temp varibale to store
    *a+*b & *a-*b*/
    int temp1,temp2;
    temp1=*a+*b;
    temp2=abs(*a-*b);  //abs is used to return absolute value
     *a=temp1;//set value of a to sum as mentioned in question
     *b=temp2; // set value of b to diff mentioned in question
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}