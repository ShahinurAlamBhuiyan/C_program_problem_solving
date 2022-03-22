//2. Write a program in C to count the frequency of each element of an array of size 15(Assume the elements can be from 0 to 9).
// input: 5 8 0 1 2 4 7 5 8 8 6 5 3 2 1
// output: 1 2 2 1 1 3 1 1 3 0

 #include <stdio.h>
 int main (){
     int array[15];
     //For counting how many similar value is assigned.
     int zeroCounter = 0,
         oneCounter = 0,
         twoCounter = 0,
         threeCounter = 0,
         fourCounter = 0,
         fiveCounter = 0,
         sixCounter = 0,
         sevenCounter = 0,
         eightCounter = 0,
         nineCounter = 0;
 // Taking input in array.
 printf("Enter the numbers: ");
 for (int i = 0; i <= 14 ; i++) {
     scanf("%d", &array[i]);
 }
 
// checking each value...
 for (int i = 0; i <= 14; i++) {
     switch (array[i]) { // if value is =>
         case 0:
             zeroCounter++;
             break;
         case 1:
             oneCounter++;
             break;
         case 2:
             twoCounter++;
             break;
         case 3:
             threeCounter++;
             break;
         case 4:
             fourCounter++;
             break;
         case 5:
             fiveCounter++;
             break;
         case 6:
             sixCounter++;
             break;
         case 7:
             sevenCounter++;
             break;
         case 8:
             eightCounter++;
             break;
         default:
             nineCounter++;
             break;
     }
 /*
     if (array[i] == 0) {
         zero++;
    } else if(array[i] == 1) {
        one++;
    }else if(array[i] == 2) {
        two++;
    }else if(array[i] == 3) {
        three++;
    }else if(array[i] == 4) {
        four++;
    }else if(array[i] == 5) {
        five++;
    }else if(array[i] == 6) {
        six++;
    }else if(array[i] == 7) {
        seven++;
    }else if(array[i] == 8) {
        eight++;
    }else (array[i] == 9) {
        nine++;
    }
  */
 }
  
 }
    printf("The frequencies of the numbers are: %d %d %d %d %d %d %d %d %d %d\n", zeroCounter, oneCounter, twoCounter, threeCounter, fourCounter, fiveCounter, sixCounter, sevenCounter, eightCounter, nineCounter);
    return 0;
 }

