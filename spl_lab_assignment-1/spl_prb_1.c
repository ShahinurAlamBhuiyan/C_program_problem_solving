//1. Write a program to generate the multiplication table of a number taken as input using for loop.

#include <stdio.h>
int main(){
    
    int n;
    
    printf("Enter number: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
    
    return 0;
}
