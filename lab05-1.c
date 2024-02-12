#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_input[16];
    long long n, n_digit =1 , power, i, mod, power_digit, n2;
    printf("Input n = ");
    fgets(n_input, 16, stdin);
    n = atoll(n_input);
    n2 = n;
    power = n*n;
    printf("n^2 = %lld\n", power);

    while (1){
        if (n2 == 0)
            break;
        n2 /= 10;
        n_digit *= 10;
    }

    power_digit = power % n_digit;

    if (power_digit == n){
        printf("Yes. %lld is automorphic number.", n);
    }
    else {
        printf("No. %lld is not automorphic number.", n);
    }
}