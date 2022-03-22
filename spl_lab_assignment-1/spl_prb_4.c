// Write a program that will count number of digits, as well as, sum up each digit for a given integer N.

// 125 => 3 d => 1 + 2 + 5;

#include <stdio.h>
int main (){
    int number, digitCounter = 0, sumOfDigits = 0, modOfNum;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number == 0) {
         printf("The number has %d digits which sum to %d.\n", 1, sumOfDigits);
    }else{
        while(number != 0){
            modOfNum = number % 10; // taking the last digit
            sumOfDigits = sumOfDigits + modOfNum; // sum of digits
            digitCounter++; // counting total digit.
            number = number / 10; // digit evaluting
        }
         printf("The number has %d digits which sum to %d.\n", digitCounter, sumOfDigits);
    }
   
    return 0;
}


// BREAK-DOWN =>
/*
125 => 125 / 10 => 12
125 => 125 % 10 => 5


12 => 12 / 10 => 1
12 => 12 % 10 => 2

1 => 1 / 10 => 0
1 => 1 % 10 => 1
*/
