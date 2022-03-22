/*
kono bosto "u" adibege and "a" toron jatra shuru korlo. "t" somoy pore er beg jodi "v" hoy tahole "2t" somoye bostoti koto durutto otikrom korbe??
 
 Amra jani, s = u * t + 0.5 * a * t * t;
 v = u + at;
 
 2t sec por utikranto duruttoo,
 
 s = u * 2t + 0.5 * a * 4 * t * t;
   = u * 2t + a * 2 * t * t;
   = 2t(u + at);
   = 2 * t * v;
 
*/

#include <stdio.h>
int main()

{
    double velocity, time, s ;
    printf("Velocity = ");
    scanf("%lf", &velocity);
    
    printf("Time = ");
    scanf("%lf", &time);
    
    s = 2 * time * velocity;
    
    printf("Otikranto durutto: %0.2lf\n", s);
    
    
    return 0;
}
