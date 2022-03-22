// 3. Write a program that will take n numbers as input and print their sum, average and maximum as output.

#include <stdio.h>
int main () {
    int totalNumber;
    float sum = 0, avrg = 0, maximum = 0;
    float n[10000];
    
    printf("How many number?");
    scanf("%d", &totalNumber);
    
    // TAKING VALUE FROM USER.
    for (int i = 0; i < totalNumber; i++) {
        scanf("%f", &n[i]);
    }
    
    
    // FOR SUM.
    for (int i =  0; i < totalNumber; i++) {
        sum = sum + n[i];
    }
    printf("Sum = %0.1f\n", sum);
    
    // FOR AVERAGE.
    avrg = sum / totalNumber;
    printf("Average = %0.2f\n", avrg);
    
    // FOR MAXIMUM.
    maximum = n[0];
    for (int i =  0; i < totalNumber; i++) {
        
        if(n[i] > maximum){
            maximum = n[i];
        }
    }
    printf("Maximum = %0.1f\n", maximum);
    
    return 0;
}
