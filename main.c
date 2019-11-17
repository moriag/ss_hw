#include <stdio.h>
#include "myMath.h"
int main(){
    double userNumber;

    printf("please insert a real number:\n");
    scanf("%lf",&userNumber);
    
    double answer= sub( (add( Exp((int)userNumber) , (Pow(userNumber,3)) ) ) , 2);

    printf("The value of f(x) = e^x+x^3-2 at the point x = %.4lf, is: %.4lf\n",userNumber,answer);
    
    answer= add( (mul(userNumber,3)) , (mul( (Pow(userNumber,2)) , 2) ) );
    printf("the value of f(x) = 3x+2x^2 at the point x = %.4lf, is: %.4lf\n",userNumber,answer);
    
    answer= sub( (div( (mul( Pow(userNumber,3) , 4)) ,5)) , (mul(userNumber,2) ));
    printf("the value of f(x) = (4x^3)/5-2x at the point x = %.4lf, is: %.4lf\n",userNumber,answer);
}