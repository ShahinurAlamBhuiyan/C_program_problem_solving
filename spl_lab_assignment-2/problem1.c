// 1. Write a program that will take 10 positive integers into an array A. Now find all the integers that are divisible by 3 and replace them by -1 in array A elements of array A.. Finally show all Enter the numbers:
// 9 11 34 23 16 15 2 37 89 54
// -1 11 34 23 16 -1 2 37 89 -1

#include <stdio.h>
int main (){
    int n[10]; // Declare the size of the array 10.
    printf("Enter the numbers: ");
    
    
    for (int i = 0; i < 10; i++) {
        // Taking input.
        scanf("%d", &n[i]);
        
        // Check the taken input is divisible by 3. then change the value into -1.
        if(n[i] % 3 == 0){
            n[i] = -1;
        }
    }
    
    // Display the full array.
    for (int j = 0; j < 10; j++) {
        printf("%d ", n[j]);
    }
    printf("\n");
    return 0;
}
