//Program that will take an integer of length one from the terminal and then display the digit in English.
/*
#include <stdio.h>
int main () {
    int num;
    scanf("%d", &num);
    
    switch (num) {
        case 0:
            printf("Zero.\n");
            break;
            
        case 1:
            printf("One.\n");
            break;
            
        case 2:
            printf("Two.\n");
            break;
            
        case 3:
            printf("Three.\n");
            break;
            
        case 4:
            printf("Four.\n");
            break;
            
        case 5:
            printf("Five.\n");
            break;
            
        case 6:
            printf("Six.\n");
            break;
            
        case 7:
            printf("Seven.\n");
            break;
            
        case 8:
            printf("Eight.\n");
            break;
            
        case 9:
            printf("Nine.\n");
            break;
        default:
            break;
    }
    
    
    return 0;
}
*/

// Program that will check whether a triangle is valid or not, when the three angles (angle value should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
/*
#include <stdio.h>
int main () {
    int a,b,c, sum;
    scanf("%d%d%d", &a, &b, &c);
    
    sum = a + b + c;
    
    if(sum == 180 && a != 0 && b != 0 && c != 0) printf("Yes.\n");
    else printf("No.\n");
 
    return 0;
}
*/

// Program that will read from the console a random positive nonzero number and determine if it is a power of 2.
/*
#include <stdio.h>
int main () {
    int num, flag = 0;
    scanf("%d", &num);
    
    if(num == 1){
        flag = 1;
    }
    if(num != 0){
 
        while (num != 1) {
            if(num % 2 != 0){// odd
                flag = 0;
                
            }
            if(num % 2 == 0){ // even
                flag = 1;
            }
            num /= 2;
        }
    }
    
    if(flag == 1){
        printf("Yes.\n");
    }else{
        printf("No.\n");
    }
    return 0;
}
 */


// Program that will read from the console a random number and check if it is a nonzero positive number. If the check is yes, it will determine if the number is a power of 2.
/*
#include <stdio.h>
int main (){
    int num, flag;
    scanf("%d", &num);
    
    if(num == 1){
        flag = 1;
    }
    else if(num == 0){
        printf("Zero is not a valid input.\n");
    }else if(num < 0){
        printf("Negative input is not valid.\n");
    }else{
        
        while(num != 1){
            if(num % 2 != 0){
                flag = 0;
            }
            if(num % 2 == 0){
                flag = 1;
            }
            num /= 2;
        }
    }
    
    if(flag == 1){
        printf("Yes.\n");
    }else if(flag == 0){
        printf("No.\n");
    }
 
    return 0;
}
*/

// Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.
/*
#include <stdio.h>
int main () {
    int x, y;
    printf("Enter two number: ");
    scanf("%d%d", &x, &y);
    
    if(x > y){
        printf("%d is greater than %d\n", x, y);
    }else if(x < y){
         printf("%d is less than %d\n", x, y);
    }else{
        printf("%d  is equal to %d\n", x, y);
    }


    return 0;
}
*/




// 






































//#include <stdio.h>
//int main () {
//
//
//
//    return 0;
//}
