// 1. Determine if an input integer is even or odd.
/*
#include <stdio.h>
 
int main()

{
    int num;
    
    printf("Enter a input to check even or odd: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        // even  number
        printf("Your entered number is %d.\nThis is an even number.\n", num);
    }else{
        // odd
        printf("Your entered number is %d. This is a odd number.", num);
    }
    
    
    return 0;
}
*/
// ---------------------------------------------------------



// 2. Determine if the second least significant digit of an input integer is a multiple of 3.


/*
#include <stdio.h>

int main()

{
    long int num, first_operation, lsd;
    scanf("%lld", &num);

//         1234567898754389 -> problem input.
    first_operation = num / 10; // bhagfol
    lsd = first_operation % 10;


    if(lsd % 3 == 0 ){
        printf("This is multifle of 3.\n");
    }else{
        printf("This is not multifle of 3.\n");
    }

    return 0;
}
*/
// ---------------------------------------------------------



// (3) Take number of days (integer) as input from user. Convert it into years, months and days such that months and days do not exceed 11 and 29 respectively.
/*
#include <stdio.h>

int main()

{
    int num_days, total_years, mod_years, total_months, mod_months, total_days;
    printf("Enter your total days for standered convertion: ");
    
    scanf("%d", &num_days);
    
    total_years = num_days / 365;
    mod_years = num_days % 365;
    
    total_months = mod_years / 30;
    mod_months = mod_years % 30;
    
    total_days = mod_months;
    
    printf("(DD-MM-YY)\n%d - %d - %d\n", total_days, total_months, total_years);
    
    return 0;
}
 */
// ---------------------------------------------------------



// 4. Take input yard,foot and inch (all integers) as input from user. Convert them into foot.
/*
#include <stdio.h>
int main()

{
    int yard, inch, yard_to_foot;
    
    double inch_to_foot;
    
    printf("enter yard to convert into foot = ");
    scanf("%d", &yard);
    
    printf("enter inch to convert into foot = ");
    scanf("%d", &inch);
    
    yard_to_foot = yard * 3;
    inch_to_foot = inch * 0.083;
    
    printf("%d yard = %d foot.\n", yard, yard_to_foot);
    printf("%d inch = %0.3lf foot.\n", inch, inch_to_foot);
    
    return 0;
}
*/
// ---------------------------------------------------------



// 5. Take input two times each consisting of hour, minute and second (all integers). Add them up such that the resultant minute and second do not exceed 59.
/*
#include <stdio.h>
int main()

{
    int h1, h2, m1, m2, s1, s2, TH, TM, TS, devide_TM, devide_TS, mod_TS, mod_TM;
    
    printf("Please enter 1st hour: ");
    scanf("%d", &h1);
    printf("Please enter 1st minutes: ");
    scanf("%d", &m1);
    printf("Please enter 1st seconds: ");
    scanf("%d", &s1);
    
    printf("Please enter 2nd hours: ");
    scanf("%d", &h2);
    printf("Please enter 2nd minutes: ");
    scanf("%d", &m2);
    printf("Please enter 2nd seconds: ");
    scanf("%d", &s2);
 
    TH = h1 + h2;
    TM = m1 + m2;
    TS = s1 + s2;
    
    if(TM >= 60){
        devide_TM = TM / 60;
        mod_TM = TM % 60;
        
        TH = TH + devide_TM;
        TM = mod_TM; // minutes 59
    }
    
    if(TS >= 60 ){
        devide_TS = TS / 60;
        mod_TS = TS % 60;
        
        TM = TM + devide_TM;
        
        if(TM >= 60){
            int double_devide_TM = TM / 60;
            TH = TH + double_devide_TM;
            
            int double_mod_TM = TM % 60;
            TM = double_mod_TM;
        }
        TS = mod_TS;
    }
    
    printf("Total time : %d hours %d minutes %d seconds\n", TH , TM, TS);
    return 0;
}
*/





























