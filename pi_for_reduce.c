#include "omp.h"

#define MAX 10000000000

void main(){
    double pi = 0.0;
    #pragma omp parallel for reduction(+:pi)
    for(int i=0; i<MAX; i++){
        pi += 4.0 * (i%2==0? 1: -1) / (2.0*i + 1);
    }


    printf("pi: %.16lf", pi);
    return 0;
}