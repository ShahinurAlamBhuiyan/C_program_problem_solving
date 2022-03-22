/*
#include <stdio.h>
int main()

{
    double input1, input2, x, y;
    
    printf("Print (x+y), (x-y): ");
    scanf("%lf %lf", &input1, &input2);
    
    x = (input1 + input2) / 2;
    y = (input1 - input2) / 2;
    
    printf("x = %0.2lf\ny = %0.2lf\n", x, y);
    
    
    return 0;
}
*/

/* program for
    a1x + b1y = c1
    a2x + b2y = c2
 write a program to get the value of x, y;
 */


/*
#include <stdio.h>
int main()

{
    int a1, a2, b1, b2, c1, c2, x, y;
    
    printf("a1 = ");
    scanf("%d", &a1);
    
    printf("a2 = ");
    scanf("%d", &a2);
    
    printf("b1 = ");
    scanf("%d", &b1);
    
    printf("b2 = ");
    scanf("%d", &b2);
    
    printf("c1 = ");
    scanf("%d", &c1);
    
    printf("c2 = ");
    scanf("%d", &c2);
    x =((c1 * b2) - (c2 * b1)) / ((a1 * b2) - (a2 * b1));
    y = ((a1 * c2) - (a2 * c1)) / ((a1 * b2) - (a2 * b1));
    
    // x = (cb - cb) / (ab - ab)(1,2)
    // y = (ac - ac) /  (ab - ab) (1, 2)
    
    printf("x = %d\ny = %d\n", x, y);
    
    return 0;
}
*/


/*
#include <stdio.h>
int main()

{
    double a1, a2, b1, b2, c1, c2, d, x, y;
    
    printf("a1 = ");
    scanf("%lf", &a1);
    
    printf("a2 = ");
    scanf("%lf", &a2);
    
    printf("b1 = ");
    scanf("%lf", &b1);
    
    printf("b2 = ");
    scanf("%lf", &b2);
    
    printf("c1 = ");
    scanf("%lf", &c1);
    
    printf("c2 = ");
    scanf("%lf", &c2);
    
    d = ((a1 * b2)-(a2 * b1));
    
    if((int)d == 0){
        printf("Value of x and y can not be determined.\n");
    }else{
        x = ((c1 * b2) - (c2 * b1)) / d;
        y = ((a1 * c2) - (a2 * c1)) / d;
        
        printf("x = %0.2lf, y = %0.2lf\n", x, y);
    }
 
    return 0;
}
*/





































