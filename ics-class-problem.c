//// Find the MSD -> Most Significant Number .
//// Find the LSD -> Least Significant Number.
//
//#include <stdio.h>
//int main ()
//{
//    int value, mod_value, least_significant_number;
//
//    printf("Enter value for find out the MSD & LSD: ");
//    scanf("%d", &value);
//
//    mod_value = 0;
//
//     least_significant_number = value % 10;
//
//
//    while (value != 0) {
//        mod_value = value % 10;
//        value = value / 10;
//    }
//
//    printf("MSD = %d\nLSD = %d\n", mod_value, least_significant_number);
//
//
//
//    return 0;
//}
///*
// value = 678;
//
// while (value != 0){
//
// mod_value = 678 % 10 = 8
// value = 678 / 10 = 67;
//
//
// mod_value = 67 % 10 = 7;
// value = 67 / 10 = 6
//
//
// mod_value = 6 % 10 = 6;
// value = 6 / 10 = 0;
// }
// printf("MSD = 6")
//
// */




#include <stdio.h>
int main()

{
    int i, sum = 0,  n;
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        sum += i * i;
    }
    printf("%d\n", sum);
    
    return 0;
}























