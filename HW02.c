#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//f(x) = sin(x)/x, Use limit value 1 when close to 0
double f(double x) {
    if(fabs(x) < 1e-12) return 1.0; //Avoiding 0/0 and numerical instability
    return sin(x) / x;
}

int main(void) {
    double eps_list[] = {1e-4, 1e-6, 1e-8};
    int n = sizeof(eps_list) / sizeof(eps_list[0]);

    printf("Numerical estimation of the function f(x)=sin(x)/x at x=0\n");
    printf("(Theory: f(0)=1, f'(0)=0)\n\n");

	int i;
    for(i=0; i<n; i++) {
        double eps = eps_list[i];

        //Estimate f(0)
        double f0_est = f(eps); //Approaching from the positive side
        //Estimate f'(0)  (symmetric difference)
        double df0_est = (f(+eps) - f(-eps)) / (2.0*eps);

        printf("When eps = %.0e : f(0) ~= %.12f,  f'(0) ~= %.12f\n", eps, f0_est, df0_est);
    }
    return 0;
}

