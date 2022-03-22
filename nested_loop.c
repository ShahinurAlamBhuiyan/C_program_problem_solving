// WAP that will print a pattern based on the input integer n. Please see the sample input output.
// 3 => 123\n 123\n 123\n
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
//    for n line.
    for (int i = 1; i <= n; i++) {
        
//         for 123 123
        for (int j = 1; j <= n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/


// 2.   WAP that will print a pattern based on the input integer n. Please see the sample input output.
// 3 =>
//123
//234
//345
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = 1; i <= n; i++) {
        
        //         for 123 234 345
        for (int j = i; j <= (i+2); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/


// 3. WAP that will print a pattern based on the input integer n. Please see the sample input output.
// => 3
//1
//23
//345

/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    printf("------------\n");
    for (int i = 1; i <= n; i++) {
        
        //         for 1 23 345 4567
        for (int j = i; j <= ((2 * i) - 1); j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/



// 4. WAP that will print a pattern based on the input integer n. Please see the sample input output
// => 3
//__1
//_22
//333  
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = n-1; j >= i; j--) {
            printf("_");
        }
        
        //         for 1 22 333 4444
        for (int j = i; j <= ((2 * i) - 1);j++ ) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
 */

// 5. WAP that will print a pattern based on the input integer n. Please see the sample input output.
//4
//43
//432
//4321
/*
#include <stdio.h>
int main () {
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = n; i >= 1; i--) {
        
        //         for 4 43 432 4321
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/



// 6. WAP that will print a pattern based on the input integer n. Please see the sample input output.
// 3=>
//1
//12
//123
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
*/

// 7. WAP that will print a pattern based on the input integer n. Please see the sample input output.
//****
//****
//****
//****
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


// 8. WAP that will print a pattern based on the input integer n. Please see the sample input output.
//*****
//****
//***
//**
//*
/*
#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = 1; i <= n; i++) {
        
        for (int j = n; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/


// 9. WAP that will print a pattern based on the input integer n. Please see the sample input output.
// 5=>
//10101
//01010
//10101
//01010
//10101

#include <stdio.h>
int main (){
    int n;
    scanf("%d", &n);
    
    //    for n line.
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n; j++) {
            
            if(i % 2 != 0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}












