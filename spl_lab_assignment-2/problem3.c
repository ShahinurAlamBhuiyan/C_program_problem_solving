// 3(A). Write a program to print the following patterns:
/*
 1 0 1 0 1 0
 1 0 1 0 1
 1 0 1 0
 1 0 1
 1 0
 1
 */

// #include <stdio.h>
// int main (){
//     // for 5 each line.
//     for (int i = 1; i <= 6; i++) {
//         // each number print 6 to i times.
//         for (int j = 6; j >= i; j--) {
//             // for "1 0 1 0" format.
//             if(j % 2 == 0){
//                 printf("1 ");
//             }else{
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// 3(B). Write a program to print the following patterns:
/*
 8
 7 7
 6 6 6
 5 5 5 5
 4 4 4 4 4
 */

// #include <stdio.h>
// int main (){
// int number = 8; // initialize number for digit.
//
//     // for 5 each line.
//     for (int i = 1; i <= 5; i++) {
//         // each number print i times.
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", number);
//         }
//         // digits are decrease accordings to i.
//         number--;
//         printf("\n");
//     }
//     return 0;
// }



// 3(C). Write a program to print the following patterns:
/*
       0
     0 3
   0 3 6
 0 3 6 9
 */

// #include <stdio.h>
// int main (){
//     // for 5 each line.
//     for (int i = 1; i <= 4; i++) {
//
//         // for space in the left side.
//         for (int s = 4; s >= i ; s--) {
//             printf("  ");
//         }
//
//         // initialize number for "0 3 6 9" format..
//         int number = 0;
//
//         // each number print i times.
//         for (int j = 1; j <= i; j++) {
//             printf("%d ", number);
//
//             // increasing number value.
//             number += 3;
//         }
//         printf("\n");
//     }
//     return 0;
// }

