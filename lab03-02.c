#include <stdio.h>
#include <stdlib.h>

int main(){
    char M_str[10], N_str[10];
    long long big, small, result, LCM;

    fgets(M_str, 10, stdin);
    fgets(N_str, 10, stdin);

    long long M = atoll(M_str);
    long long N = atoll(N_str);

    /*
    big % small = result
    big = small
    small = result
    --------------> small = 0 , GCD => big
    15 % 10 = 5
    10 % 5 = 0
    5 % 0
    small = 0, GCD = 5
    */
   if (M > N){
        big = M;
        small = N;
   } else if (M < N){
        big = N;
        small = M;
    }

    while (small != 0){
        result = big % small;
        big = small;
        small = result;

    }
    printf("GCD: %d", big);

    
}


