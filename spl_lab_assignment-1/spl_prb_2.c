//2. Write a program to calculate the factorial of a number using for loop.

#include <stdio.h>
int main(){
    int n, factorial = 1, i = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
   
    /* Using for loop */
//    for (int i = 1; i <= n; i++) {
//        factorial = factorial * i;
//    }
    
    /* Using for loop */
//    while (n != 0) {
//        factorial = factorial * i;
//        n--;
//        i++;
//    }

    /* Using for loop */
//    do {
//        factorial = factorial * i;
//        n--;
//        i++;
//    } while (n > 0);
    
    printf("factorial = %d\n", factorial);
    
    return 0;
}


// 4! = 4 * 3 * 2 * 1
//

// 9! = 9 * 8 * ...
