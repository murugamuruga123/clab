#include <stdio.h>
#include <math.h>   

int main() {
    double number = 9.75;

    printf("Original number: %lf\n", number);

    
    printf("trunc(%lf) = %lf\n", number, trunc(number));

    
    printf("sqrt(%lf) = %lf\n", number, sqrt(number));

    
    printf("pow(%lf, 2) = %lf\n", number, pow(number, 2));

    
    printf("floor(%lf) = %lf\n", number, floor(number));

    
    printf("ceil(%lf) = %lf\n", number, ceil(number));

    return 0;
}
