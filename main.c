#include <stdio.h>
#include <stdlib.h>  
#include <time.h>   
#include <math.h>    

int main() {
    int i = 1;
    int n = 1000;
    double I = 0.0;
    double r;
    double a = M_PI;             
    double b = (3.0 * M_PI) / 2; 

    srand(time(0));

    do {
        r = (b - a) * ((double)rand() / RAND_MAX) + a;
        
        I = I + sin(r) * r;
        
        printf("I / i = %f\n", I / i);
        
        i = i + 1;
    } while (i <= n);
}
