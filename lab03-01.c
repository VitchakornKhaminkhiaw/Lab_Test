#include <stdio.h>
#include <stdlib.h>

int main(){
    char n_str[10];

    fgets(n_str, 10, stdin);

    int n = atoi(n_str);

    while (n >= 0){
        printf("%d\n", n);
        n -= 1;
    }
}
