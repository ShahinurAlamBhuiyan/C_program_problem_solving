/*
 Read two floating points' values of double precision A and B, corresponding to two student's grades. After this, calculate the student's average, considering that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten, always with one digit after the decimal point. Don’t forget to print the end of line after the result, otherwise you will receive “Presentation Error”. Don’t forget the space before and after the equal sign.
 
 Input
 The input file contains 2 floating points' values with one digit after the decimal point.
 
 Output
 Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with 5 digits after the decimal point and with a blank space before and after the equal signal.


#include <stdio.h>

int main ()
{
    float A, B, avrg;
    
    scanf("%f", &A);
    scanf("%f", &B);
    
    avrg = (A*3.5 + B*7.5) /(3.5 + 7.5);
    
    printf("MEDIA = %0.5f\n", avrg);
    
    return 0;
}
*/

/*
 
 Read three values (variables A, B and C), which are the three student's grades. Then, calculate the average, considering that grade A has weight 2, grade B has weight 3 and the grade C has weight 5. Consider that each grade can go from 0 to 10.0, always with one decimal place.
 
 Input
 The input file contains 3 values of floating points (double) with one digit after the decimal point.
 
 Output
 Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.
 
 

#include <stdio.h>
int main()

{
    double A, B, C, result;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    result = (A*2 + B*3 + C*5) / (2 + 3 + 5);
    
    printf("MEDIA = %0.1lf\n", result);
    
    return 0;
}
*/


/*
 Write a program that reads an employee's number, his/her worked hours number in a month and the amount he received per hour. Print the employee's number and salary that he/she will receive at end of the month, with two decimal places.
 
 Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
 Don’t forget the space before and after the equal signal and after the U$.
 Input
 The input file contains 2 integer numbers and 1 value of floating point, representing the number, worked hours amount and the amount the employee receives per worked hour.
 
 Output
 Print the number and the employee's salary, according to the given example, with a blank space before and after the equal signal.



#include <stdio.h>
int main()
{
    int employee_num,  working_hours;
    float per_hour, total_salary;
    
    scanf("%d %d %f", &employee_num, &working_hours, &per_hour);
    
    total_salary = working_hours * per_hour;
    
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", employee_num, total_salary);
    
    
    return 0;
}
*/





/*
 In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
 
 Input
 The input file contains two lines of data. In each line there will be 3 values: two integers and a floating value with 2 digits after the decimal point.
 
 Output
 The output file must be a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after ":" and after "R$" symbol. The value must be presented with 2 digits after the point.

#include <stdio.h>

int main() {
    
    int product_code1, product_unit1, product_code2, product_unit2;
    float product_price1, product_price2, pay1, pay2, total_payment;
    
    scanf("%d %d %f", &product_code1, &product_unit1, &product_price1);
    scanf("%d %d %f", &product_code2, &product_unit2, &product_price2);
    
    pay1 = product_unit1 * product_price1;
    pay2 = product_unit2 * product_price2;
    
    total_payment = pay1 + pay2;
    
    printf("VALOR A PAGAR: R$ %0.2f\n", total_payment);
    
    return 0;
}
*/






/*
 Make a program that calculates and shows the volume of a sphere being provided the value of its radius (R) . The formula to calculate the volume is: (4/3) * pi * R3. Consider (assign) for pi the value 3.14159.
 
 Tip: Use (4/3.0) or (4.0/3) in your formula, because some languages (including C++) assume that the division's result between two integers is another integer. :)
 
 Input
 The input contains a value of floating point (double precision).
 
 Output
 The output must be a message "VOLUME" like the following example with a space before and after the equal signal. The value must be presented with 3 digits after the decimal point.


#include <stdio.h>
int main()

{
    double R, sphere;
    
    scanf("%lf", &R);
    
    sphere = (4/3.0) * 3.14159 * R * R * R;
    
    printf("VOLUME = %0.3lf\n", sphere);
    
    return 0;
}
*/


/*
 Make a program that reads three floating point values: A, B and C. Then, calculate and show:
 a) the area of the rectangled triangle that has base A and height C.
 b) the area of the radius's circle C. (pi = 3.14159)
 c) the area of the trapezium which has A and B by base, and C by height.
 d) the area of ​​the square that has side B.
 e) the area of the rectangle that has sides A and B.
 
 Input
 The input file contains three double values with one digit after the decimal point.
 
 Output
 The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message (in Portuguese) and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.
 



#include <stdio.h>

int main() {
    
    float A, B, C, triangle, redius, trapezium, square, rectangle;
    scanf("%f %f %f", &A, &B, &C);
    
    triangle = 0.5 * A * C;
    redius = 3.14159 * C * C;
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;
    
    
    printf("TRIANGULO: %0.3f\n",triangle);
    printf("CIRCULO: %0.3f\n",redius);
    printf("TRAPEZIO: %0.3f\n",trapezium);
    printf("QUADRADO: %0.3f\n",square);
    printf("RETANGULO: %0.3f\n",rectangle);
    
    
    return 0;
}
*/



/*
 Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
 
 Input
 The input file contains two values: one integer value X representing the total distance (in Km) and the second one is a floating point number Y  representing the spent fuel total, with a digit after the decimal point.
 
 Output
 Present a value that represents the average consumption of a car with 3 digits after the decimal point, followed by the message "km/l".


#include <stdio.h>

int main() {
    
    int X;
    float Y, total_spent;
    
    scanf("%d %f", &X, &Y);
    
    total_spent = X / Y;
    
    printf("%0.3f km/l\n", total_spent);
    
    return 0;
}
 */





/*
 Little John wants to calculate and show the amount of spent fuel liters on a trip, using a car that does 12 Km/L. For this, he would like you to help him through a simple program. To perform the calculation, you have to read spent time (in hours) and the same average speed (km/h). In this way, you can get distance and then, calculate how many liters would be needed. Show the value with three decimal places after the point.
 
 Input
 The input file contains two integers. The first one is the spent time in the trip (in hours). The second one is the average speed during the trip (in Km/h).
 
 Output
 Print how many liters would be needed to do this trip, with three digits after the decimal point.



#include <stdio.h>

int main()
{
    float spent_time, average_speed, total_liters;
    
    scanf("%f %f", &spent_time, &average_speed);
    
    total_liters = (spent_time * average_speed) / 12;
    
    printf("%0.3f\n", total_liters);
    
    
    
    
    return 0;
}
*/


/*
 In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.
 
 Input
 The input file contains an integer value N (0 < N < 1000000).
 
 Output
 Print the read number and the minimum quantity of each necessary banknotes in Portuguese language, as the given example. Do not forget to print the end of line after each line, otherwise you will receive “Presentation Error”.


#include <stdio.h>

int main() {
    
    int N, hundred_note, fifty_note, twenty_note, ten_note, five_note, two_note, one_note;
    scanf("%d", &N);
    
    hundred_note = N / 100;
    
    int hundred_mod = N % 100; // 76
    
    fifty_note = hundred_mod / 50;// 1
    
    int fifty_mod = hundred_mod % 50; // 26
    
    twenty_note = fifty_mod / 20; // 1
    int twenty_mod = fifty_mod % 20; // 16
    
    ten_note =  twenty_mod / 10; // 1
    int ten_mod = twenty_mod % 10; // 6
    
    five_note = ten_mod / 5; // 1
    int five_mod = ten_mod % 5; // 3
    
    two_note = five_mod / 2;
    int two_mod = five_mod % 2;
    
    one_note = two_mod / 1;
    
    printf("%d\n", N);
    printf("%d nota(s) de R$ 100,00\n", hundred_note);
    printf("%d nota(s) de R$ 50,00\n", fifty_note);
    printf("%d nota(s) de R$ 20,00\n", twenty_note);
    printf("%d nota(s) de R$ 10,00\n", ten_note);
    printf("%d nota(s) de R$ 5,00\n", five_note);
    printf("%d nota(s) de R$ 2,00\n", two_note);
    printf("%d nota(s) de R$ 1,00\n", one_note);
    
    return 0;
}
 */

/*
 Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
 
 Input
 The input file contains an integer N.
 
 Output
 Print the read time in the input file (seconds) converted in hours:minutes:seconds like the following example.

#include <stdio.h>
int main()

{
    int N, hours, minutes, seconds;
    scanf("%d", &N);
    
    hours = N / 3600;
    int hours_mod = N % 3600;
    
    minutes = hours_mod / 60;
    
    seconds = hours_mod % 60;
    
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
*/





/*
 Read an integer value corresponding to a person's age (in days) and print it in years, months and days, followed by its respective message “ano(s)”, “mes(es)”, “dia(s)”.
 
 Note: only to facilitate the calculation, consider the whole year with 365 days and 30 days every month. In the cases of test there will never be a situation that allows 12 months and some days, like 360, 363 or 364. This is just an exercise for the purpose of testing simple mathematical reasoning.
 
 Input
 The input file contains 1 integer value.
 
 Output
 Print the output, like the following example.
 



#include <stdio.h>

int main()
{
    int age, years, year_mod, months, days;
    
    scanf("%d", &age);
    
    years = age / 365;
    year_mod = age % 365;
    
    months = year_mod / 30;
    
    days = year_mod % 30;
    
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    
    return 0;
}

*/






/*
 Read four integer values named A, B, C and D. Calculate and print the difference of product A and B by the product of C and D (A * B - C * D).
 
 Input
 The input file contains 4 integer values.
 
 Output
 Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.



#include <stdio.h>

int main() {
    
    int A, B, C, D, difference;
    
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    difference = (A * B - C * D);
    
    printf("DIFERENCA = %d\n", difference);
    
    return 0;
}
*/





/*
 Make a program that reads a seller's name, his/her fixed salary and the sale's total made by himself/herself in the month (in money). Considering that this seller receives 15% over all products sold, write the final salary (total) of this seller at the end of the month , with two decimal places.
 
 - Don’t forget to print the line's end after the result, otherwise you will receive “Presentation Error”.
 
 - Don’t forget the blank spaces.
 
 Input
 The input file contains a text (employee's first name), and two double precision values, that are the seller's salary and the total value sold by him/her.
 
 Output
 Print the seller's total salary, according to the given example.


#include <stdio.h>

int main() {
    
    char first_name;
    double salary, total_value_sold, total_salary;
    
    scanf("%s1", &first_name);
    scanf("%lf %lf", &salary, &total_value_sold);
    
    total_salary = salary + ((15 * total_value_sold) / 100);
    
    printf("TOTAL = R$ %0.2lf\n", total_salary);
    
    return 0;
}
*/




/*
 Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:
 
 
 
 Input
 The input file contains 3 integer values.
 
 Output
 Print the greatest of these three values followed by a space and the message “eh o maior”.


#include <stdio.h>

int main() {
    
    float a, b, c, greatest;
    
    scanf("%f %f %f", &a, &b, &c);
    
    greatest = (a + b + (a * b * c) * (a - b)) / 2;
    
    printf("%f\n", greatest);
    
//    if(a > b && a > c){
//        printf("%d eh o maior\n", a);
//    }
//    else if(b > c && b > a){
//        printf("%d eh o maior\n", b);
//    }else{
//        printf("%d eh o maior\n", c);
//    }
    
    return 0;
}

*/






/*
 Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
 
 Distance =
 
 Input
 The input file contains two lines of data. The first one contains two double values: x1 y1 and the second one also contains two double values with one digit after the decimal point: x2 y2.
 
 Output
 Calculate and print the distance value using the provided formula, with 4 digits after the decimal point.


#include <stdio.h>

int main()

{
    double x1, x2, y1, y2, distance;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    
    distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    
    printf("%0.4lf\n", distance);
    
    return 0;
}
*/







/*
 Two cars (X and Y) leave in the same direction. The car X leaves with a constant speed of 60 km/h and the car Y leaves with a constant speed of 90 km / h.
 
 In one hour (60 minutes) the car Y can get a distance of 30 kilometers from the X car, in other words, it can get away one kilometer for each 2 minutes.
 
 Read the distance (in km) and calculate how long it takes (in minutes) for the car Y to take this distance in relation to the other car.
 
 Input
 The input file contains 1 integer value.
 
 Output
 Print the necessary time followed by the message "minutos" that means minutes in Portuguese.



#include <stdio.h>

int main()

{
    int km, total_time;
    
    scanf("%d", &km);
    
    total_time = 2 * km;
    
    
    printf("%d minutos\n", total_time);
    
    
    return 0;
}
*/


/*
 Read a value of floating point with two decimal places. This represents a monetary value. After this, calculate the smallest possible number of notes and coins on which the value can be decomposed. The considered notes are of 100, 50, 20, 10, 5, 2. The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
 
 Input
 The input file contains a value of floating point N (0 ≤ N ≤ 1000000.00).
 
 Output
 Print the minimum quantity of banknotes and coins necessary to change the initial value, as the given example.
 
 */

/*
#include <stdio.h>

int main() {
    
    float mon_value, hundred_mod, fifty_mod, twenty_mod, ten_mod, five_mod, two_mod, one_mod, half_mod, one_forth_mod, one_ten_mod, zero_point_zero_five_mod;
    int hundred_note, fifty_note, twenty_note, ten_note, five_note, two_note, one_coin, half_coin, one_forth_coin, one_ten_coin, zero_point_zero_five_coin, zero_point_zero_one_coin;
    
    scanf("%f", &mon_value);
    
     hundred_note = mon_value / 100;
     hundred_mod = mon_value - (hundred_note * 100);
    
    
     fifty_note = hundred_mod / 50;
     fifty_mod = hundred_mod - (fifty_note * 50);
    
     twenty_note = fifty_mod / 20;
     twenty_mod = fifty_mod - (twenty_note * 20);
    
     ten_note = twenty_mod / 10;
     ten_mod = twenty_mod - (ten_note * 10);
    
     five_note = ten_mod / 5;
     five_mod = ten_mod - (five_note * 5);
    
     two_note = five_mod / 2;
     two_mod = five_mod - (two_note * 2);
    
     one_coin = two_mod / 1;
     one_mod = two_mod - (one_coin * 1);
    
     half_coin = one_mod / 0.50;
     half_mod = one_mod - (half_coin * 0.50);
    
     one_forth_coin = half_mod / 0.25;
     one_forth_mod = half_mod - (one_forth_coin * 0.25);
    
     one_ten_coin = one_forth_mod / 0.10;
     one_ten_mod = one_forth_mod - (one_ten_coin * 0.10);
    
     zero_point_zero_five_coin = one_ten_mod / 0.05;
     zero_point_zero_five_mod = one_ten_mod - (zero_point_zero_five_coin * 0.05);
    
    zero_point_zero_one_coin = (zero_point_zero_five_mod / 0.01) ;
    
    
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", hundred_note);
    printf("%d nota(s) de R$ 50.00\n", fifty_note);
    printf("%d nota(s) de R$ 20.00\n", twenty_note);
    printf("%d nota(s) de R$ 10.00\n", ten_note);
    printf("%d nota(s) de R$ 5.00\n", five_note);
    printf("%d nota(s) de R$ 2.00\n", two_note);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", one_coin);
    printf("%d moeda(s) de R$ 0.50\n", half_coin);
    printf("%d moeda(s) de R$ 0.25\n", one_forth_coin);
    printf("%d moeda(s) de R$ 0.10\n", one_ten_coin);
    printf("%d moeda(s) de R$ 0.05\n", zero_point_zero_five_coin);
    printf("%d moeda(s) de R$ 0.01\n", zero_point_zero_one_coin);
    
    
    
    return 0;
}

*/




/*
 Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
 
 Input
 Four integer numbers A, B, C and D.
 
 Output
 Show the corresponding message after the validation of the values​​.



#include <stdio.h>

int main() {
    
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    if(B > C && D > A){
        
        if((C + D) > A && (C + D) > B){
            
            if(C >= 0 && D >= 0){
                if(A % 2 == 0){
                            printf("Valores aceitos\n");
                }else{
                            printf("Valores nao aceitos\n");
                }
            }else{
                printf("Valores nao aceitos\n");
            }
        }else{
            printf("Valores nao aceitos\n");
        }
    }else{
        printf("Valores nao aceitos\n");
    }
    
    
    return 0;
}
 */





// 1037...................
/*
#include <stdio.h>

int main() {
    float num;
    
    scanf("%f", &num);
    
    if(num == 0 || num == 25){
        printf("Intervalo [0,25]\n");
    }
    else if(num == 50 || num == 75){
        printf("Intervalo [50,75]\n");
    }
    else if(num > 25 && num <= 50 ){
        printf("Intervalo (25,50]\n");
    }
    else if(num > 75 && num <= 100){
        printf("Intervalo (75,100]\n");
    }
    else{
        printf("Fora de intervalo\n");
    }
    
    return 0;
}
 */
//....................



/*

#include <stdio.h>

int main() {
    
    double A, B, C, R, R1, R2, T;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    R = ((B * B) - 4 * A * C);
    
    if(R < 0 || A == 0){
        printf("Impossivel calcular\n");
    }
    else{
        T = sqrt((B * B) - 4 * A * C);
        R1 = ((-B + T) / (2 * A));
        R2 = ((-B - T) / (2 * A));
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    
    return 0;
}
*/

/*
 #1037
#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    
    if(n < 0 || n > 100){
        printf("Fora de intervalo\n");
    }else{
        if(n >= 0 && n <= 25){
            printf("Intervalo [0,25]\n");
        }else if(n > 25 && n <= 50){
            printf("Intervalo (25,50]\n");
        }else if(n > 50 && n <= 75){
            printf("Intervalo (50,75]\n");
        }else{
            printf("Intervalo (75,100]\n");
        }
    }
    
    return 0;
}
*/



/*
 #1040
 
#include <stdio.h>
int main ()

{
    float N1, N2, N3, N4, avrg, N5;
    
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    
    avrg = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/ (2 + 3 + 4 + 1);
 
    printf("Media: %.1f\n", avrg);
    
    if(avrg >= 7){
        printf("Aluno aprovado.\n");
    }
    else if(avrg < 5){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n", N5);
        avrg = (avrg + N5) / 2;
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", avrg);
    }
 
 return 0;
}
*/





/*
 #1041

#include <stdio.h>

int main()
{
    float x, y;
    
    scanf("%f %f", &x, &y);
    
    if(x == 0 && y ==0){
        printf("Origem\n");
    }
    else if((x > 0 || x < 0) && y == 0){   // y =  0 && x + y != 0
        printf("Eixo X\n");
    }
    else if((y > 0 || y < 0) && x == 0){ // x =  0 && x + y != 0
        printf("Eixo Y\n");
    }
    
    else if(x > 0 && y > 0){
        printf("Q1\n");
    }
    else if(x < 0 && y > 0){
        printf("Q2\n");
    }
    else if(x < 0 && y < 0){
        printf("Q3\n");
    }
    else{
        printf("Q4\n");
    }
    
    
    
    return 0;
}

*/

/*
 #1038

#include <stdio.h>

int main()
{
    int product_code, items_need;
    float total_payment;
    
    scanf("%d %d", &product_code, &items_need);
    
    if(product_code == 1){
        total_payment = items_need * 4.00;
        printf("Total: R$ %0.2f\n", total_payment);
    }
    else if(product_code == 2){
        total_payment = items_need * 4.50;
        printf("Total: R$ %0.2f\n", total_payment);
    }
    else if(product_code == 3){
        total_payment = items_need * 5.00;
        printf("Total: R$ %0.2f\n", total_payment);
    }
    else if(product_code == 4){
        total_payment = items_need * 2.00;
        printf("Total: R$ %0.2f\n", total_payment);
    }
    else if(product_code == 5){
        total_payment = items_need * 1.50;
        printf("Total: R$ %0.2f\n", total_payment);
    }
 
    return 0;
}
*/




/*
 #1043
#include<stdio.h>
int main()
{
    float num1, num2, num3,perimeter,area;
    scanf("%f%f%f",&num1,&num2,&num3);
    
    if( (num1 + num2) > num3 && (num2 + num3) > num1 && (num3 + num1) > num2){
        perimeter=num1 + num2 + num3;
        printf("Perimetro = %.1f\n",perimeter);
    }
    else{
        area = .5 * ( num1 + num2 ) * num3;
        printf("Area = %.1f\n",area);
    }
    return 0;
}

*/


/*
 #1044
#include <stdio.h>

int main ()

{
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    if(num2 % num1 == 0 || num1 % num2 == 0){
        printf("Sao Multiplos\n");
    }else{
        
        printf("Nao sao Multiplos\n");
        
    }
    
    
    return 0;
}

*/



/*
 #1036
#include <stdio.h>
int main ()

{
    double A, B, C, upper_equation_part_one,R1, R2, R ;
    
    scanf("%lf%lf%lf", &A, &B, &C);
    
    R = (B * B) - 4 * A * C;
    
    
    
    // if R < 0 ...then it's not possible to sqrt it.
    // if A == 0 ... then it't not possible to devide it.
    
    if(R < 0 || A == 0){
        printf("Impossivel calcular\n");
    }else{
        upper_equation_part_one = sqrt(R);
        R1 = (- B +  upper_equation_part_one) / (2 * A);
        R2 = (- B -  upper_equation_part_one) / (2 * A);
        printf("R1 = %0.5lf\nR2 = %0.5lf\n", R1, R2);
    }
    return 0;
}
*/




/*
#include<stdio.h>
int main ()
{
    int n, i;
    
    int current, next = 0, nn = 1, nnn = 2;
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        
        current = next;
        next = nn;
        nn = nnn;
        nnn = next + current + nn;
        
        printf("%d ", current);
    }
    return 0;
}

*/






// 1059..Write a program that prints all even numbers between 1 and 100, including them if it is the case.
/*
#include <stdio.h>
int main()
{
    int i;
    
    for (i = 2; i <= 100; i+=2) {
        printf("%d\n",i);
    }
    return  0;
}
*/



// 1060....Write a program that reads 6 numbers. These numbers will only be positive or negative (disregard null values). Print the total number of positive numbers.


/*
#include <stdio.h>
int main()
{
    float num;
    int i, sum = 0;

    for (i = 1; i <= 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            sum++;
        }
    }
    printf("%d valores positivos\n", sum);

    return  0;
}
*/






// 1064...Read 6 values that can be floating point numbers. After, print how many of them were positive. In the next line, print the average of all positive values typed, with one digit after the decimal point.

/*
#include <stdio.h>
int main()
{
    float num,sum = 0, avrg ;
    int i, total = 0;
    
    for (i = 1; i <= 6; i++) {
        scanf("%f", &num);
        if (num > 0) {
            total++;
            sum = sum + num;
        }
        avrg = sum / total;
    }
    printf("%d valores positivos\n", total);
    printf("%0.1f\n", avrg);
    
    return  0;
}
*/


// 1066.....Make a program that reads five integer values. Count how many   of these values are even, odd, positive and negative. Print these information like following example.

/*
#include <stdio.h>
int main()

{
    int i, num, event_counter = 0, odd_counter = 0, positive_counter = 0, negative_counter = 0;
    
    for (i = 1; i <= 5; i++) {
 
        scanf("%d", &num);
 
        if(num % 2 == 0){
            event_counter++;
        }else{
            odd_counter++;
        }
        
        if(num > 0){
            positive_counter++;
        }
        else if(num < 0){
            negative_counter++;
        }
    }
    printf("%d valor(es) par(es)\n", event_counter);
    printf("%d valor(es) impar(es)\n", odd_counter);
    printf("%d valor(es) positivo(s)\n", positive_counter);
    printf("%d valor(es) negativo(s)\n", negative_counter);
    
    return 0;
}
*/


// 1067.....Read an integer value X (1 <= X <= 1000).  Then print the odd numbers from 1 to X, each one in a line, including X if is the case.

/*
#include <stdio.h>
int main()

{
    int i, X;
    scanf("%d", &X);
    
    for (i = 1; i <= X; i++) {
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
*/





// 1070....Read an integer value X and print the 6 consecutive odd numbers from X, a value per line, including X if it is the case.
/*
#include <stdio.h>

int main()

{
    int i = 1, n;
    scanf("%d", &n);
    
    while (i <= 6) {
        if(n % 2 != 0){
            printf("%d\n", n);
            i++;
        }
        n++;
    }
    
    return 0;
}
 
  */
 /*
 #include <stdio.h>
 
 int main()
 {
 int i,x;
 scanf("%d",&x);
 for(i =x;i <= x+5;i++){
 if(x % 2 !=0){
 printf("%d\n",x);
 i++;
 }
 x++;
 }
 return 0;
 }
 
 */



// 1071...Read two integer values X and Y. Print the sum of all odd values between them.
//
//#include <stdio.h>
//
//int main()
//{
//    int x, y, i, sum;
//    int min, max;
//    scanf("%d%d", &x, &y);
//
//    if(x > y){
//        max = x;
//        min = y;
//    }else{
//        min = x;
//        max = y;
//    }
//
//    for (i = (min + 1); i < max; i++) {
//        if(i % 2 != 0){
//            sum = sum + i;
//        }
//    }
//
//    printf("%d\n",sum);
//
//    return 0;
//}
//
//
//#include <stdio.h>
//
//int main()
//{
//    int x, y, sum = 0, i;
//    int min, max;
//
//    scanf("%d%d", &x,&y);
//
//    if(x < y){
//        min = x;
//        max = y;
//    }else{
//        max = x;
//        min = y;
//    }
//
//    for(i = (min + 1); i < max; ++i) // ekhane i++ dile hynh kno??
//    {
//        if(i % 2 != 0){
//            sum += i;
//        }
//    }
//
//    printf("%d\n", sum);
//
//    return 0;
//}



// 1073....Read an integer N. Print the square of each one of the even values from 1 to N including N if it is the case.

/*
#include <stdio.h>
int main()

{
    int i, N;
    scanf("%d", &N);
    
    for (i = 2; i <= N; i += 2) {
        printf("%d^2 = %d\n", i, (i*i));
    }
    
    
    
    return 0;
}
*/


// 1074...Read an integer value N. After, read these N values and print a message for each value saying if this value is odd, even, positive or negative. In case of zero (0), although the correct description would be "EVEN NULL", because by definition zero is even, your program must print only "NULL", without quotes.

/*
#include <stdio.h>
int main()
{
    int N,X,a;
    scanf ("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf ("%d",&X);
        if(X==0)
            printf("NULL\n");
        else if(X<=0&&X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0&&X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0&&X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0&&X%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}
*/


// 1078...Read an integer N (2 < N < 1000). Print the multiplication table of N.
//1 x N = N      2 x N = 2N        ...       10 x N = 10N
/*
#include <stdio.h>

int main() {
    
    int N, i;
    scanf("%d", &N);
    
    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, N, i*N);
    }
    
    return 0;
}
*/

// S = 1 + 3/2 + 5/4 + 7/8 + ... + 39/?
#include <stdio.h>
int main()
{
    double x,y=1,z, S=0, num;
    scanf("%lf", &num);
    for(x=1; x<=num; x+=2)
    {
        z=x/y;
        S = S + z;
        y  = y * 2;
    }
    printf("%.2lf\n",S);
    return 0;
}









































































































































