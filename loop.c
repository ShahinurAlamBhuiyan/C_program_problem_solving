//1. Write a program (WAP) that will print following series upto Nth terms. 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}
*/


// 2. Write a program (WAP) that will print following series upto Nth terms. 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 ……
/*
#include <stdio.h>
int main(){
    int n, counter =0, i = 1;
    scanf("%d", &n);
    
    while (counter != n) {
        counter++;
        printf("%d ", i );
        i += 2;
    }
    return 0;
}
*/

// 3. Write a program (WAP) that will print following series upto Nth terms. 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
/*
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d,", 1);
        }else{
            printf("%d,", 0);
        }
    }
    printf("\n");
    return 0;
}
*/


// 4. Write a program (WAP) that will take N numbers as inputs and compute their average .(Restriction: Without using any array)
/*
#include <stdio.h>
int main (){
    int numOfInput;
    float sum = 0, num;
    scanf("%d", &numOfInput);
    for (int i = 1; i <= numOfInput; i++) {
        scanf("%f", &num);
        sum = sum + num;
    }
    float avrg = sum / numOfInput;
    printf("AVG of %d inputs: %f\n", numOfInput, avrg);

    return 0;
}
*/

// 5. Write a program (WAP) that will take two numbers X and Y as inputs. Then it will print the square of X and increment (if X<Y) or decrement (if X>Y) X by 1, until X reaches Y. If and when X is equal to Y, the program prints “Reached!”
// 10 5 => 100, 81, 64, 49, 36, Reached !
// 5 10 => 25, 36, 49, 64, 81, Reached !
/*
#include <stdio.h>
    int main (){
        int X, Y;
        scanf("%d%d", &X, &Y);
        if(X < Y){
            for (int i = X; (i * i) < (Y * Y); i++) {
                        printf("%d ", (i * i));
                }
            printf("Reached!\n");
        }
        else{
            for (int i = X;  (i * i) > (Y * Y); i--) {
                printf("%d ", (i * i));
            }
            printf("Reached!\n");
        }
        
    return 0;
}
*/

// 6. Write a program (WAP) for the described scenario: Player‐1 picks a number X and Player‐2 has to guess that number within N tries. For each wrong guess by Player‐2, the program prints “Wrong, N‐1 Choice(s) Left!” If Player‐2 at any time successfully guesses the number, the program prints “Right, Player‐2 wins!” and terminates right away. Otherwise after the completion of N wrong tries, the program prints “Player‐1 wins!” and halts. (Hint: Use break/continue)
/*
#include <stdio.h>
int main (){
    int orginalNum, numOfTries, fakeNum, flag = 0;
    int counter = numOfTries;
    
    scanf("%d", &orginalNum);
    scanf("%d", &numOfTries);
    
    for (int i = 1; i <= numOfTries; i++) {
        scanf("%d", &fakeNum);
        if(fakeNum == orginalNum){
            printf("Player 2 is win.\n");
            flag = 1;
        }else{
            printf("Wrong! you have %d choice left.\n", (numOfTries - i));
        }
    }
    if(flag != 1){
        printf("Player 1 win.\n");
    }
    return 0;
}
*/

// 7. Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard.

/*
#include <stdio.h>
int main (){
    char ch, counter = 1;

    scanf("%c", &ch);
    while (ch != 'A') {
        printf("Input %d: %c\n", counter, ch);
        scanf("%c", &ch);
        counter++;
    }
    return 0;
}
*/

// 8. Write a program (WAP) that will reverse the digits of an input integer. => 1234 => 4321
/*
#include <stdio.h>
int main (){
    int n, mod, devide;
    scanf("%d", &n);
    devide = n;
    while(devide != 0){
        mod = devide % 10; //
        devide = devide / 10; // 123
        printf("%d", mod);
    }
    printf("\n");

    return 0;
}
*/

// Write a program (WAP) that will find the grade of N students. For each student, it will take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). Then based on the tables shown below, the program will output his grade.
/*
#include <stdio.h>
int main (){
    int numOfStd;
    float attendance, assignment, CT, midterm, termFinal, totalGrade;
    printf("How many students?");
    scanf("%d", &numOfStd);
    
    for (int i = 1; i <= numOfStd; i++) {
        
        printf("Attendance mark of student - %d : ", i);
        scanf("%f", &attendance);
        
        printf("Assignment mark of student - %d : ", i);
        scanf("%f", &assignment);
        
        printf("Class Test mark of student - %d : ", i);
        scanf("%f", &CT);
        
        printf("Mid-Term mark of student - %d : ", i);
        scanf("%f", &midterm);
        
        printf("Term Final mark of student - %d : ", i);
        scanf("%f", &termFinal);
        
        
        float perMidNum = 30.0 / 50.0;
        float totalMidtermMarks = perMidNum * midterm;
        
        float perFinalNum = 40.0 / 100.0;
        float totalFinalMarks = perFinalNum * termFinal;
        
        totalGrade = attendance + assignment + CT + totalMidtermMarks + totalFinalMarks;
        
        if(totalGrade >= 90 && totalGrade <= 100){
            printf("Student %d : A\n", i);
        }else if(totalGrade >= 86 && totalGrade <= 89){
            printf("Student %d : A-\n", i);
        }else if(totalGrade >= 82 && totalGrade <= 85){
            printf("Student %d : B+\n", i);
        }else if(totalGrade >= 78 && totalGrade <= 81){
            printf("Student %d : B\n", i);
        }else if(totalGrade >= 74 && totalGrade <= 77){
            printf("Student %d : B-\n", i);
        }else if(totalGrade >= 70 && totalGrade <= 73){
            printf("Student %d : C+\n", i);
        }else if(totalGrade >= 66 && totalGrade <= 69){
            printf("Student %d : C\n", i);
        }else if(totalGrade >= 62 && totalGrade <= 65){
            printf("Student %d : C-\n", i);
        }else if(totalGrade >= 58 && totalGrade <= 61){
            printf("Student %d : D+\n", i);
        }else if(totalGrade >= 55 && totalGrade <= 59){
            printf("Student %d : D\n", i);
        }else{
            printf("Student %d : F\n", i);
        }
    }
    return 0;
}
*/


// 9. Write a program (WAP) that will give the sum of first Nth terms for the following series.
// 1, ‐2, 3, ‐4, 5, ‐6, 7, ‐8, 9, ‐10, 11, ‐12, 13, ‐14, ……
//#include <stdio.h>
//int main (){
//
//
//    return 0;
//}
















//#include <stdio.h>
//int main (){
//
//
//    return 0;
//}
