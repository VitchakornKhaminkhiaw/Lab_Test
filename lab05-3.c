#include <stdio.h>
#include <stdlib.h>

int main(){
    float initial, inp;
    char op;
    printf("Initial Value: ");
    scanf("%f", &initial);

    while (1){
        printf("Operator: ");
        scanf("\n%c", &op);
        if (op != "+" && op != "-" && op != "*" && op != "/"){
            break;}
        printf("Input Value: ");
        scanf("%f", &inp);
        if (op == "+"){
            initial += inp;
            printf("Present Value is %.4f", initial);
        }
        else if (op == "-"){
            initial -= inp;
            printf("Present Value is %.4f", initial);
        }
        else if (op == "*"){
            initial *= inp;
            printf("Present Value is %.4f", initial);
        }
        else if (op == "/"){
            initial /= inp;
            printf("Present Value is %.4f", initial);
        }
    }
    printf("Finish Calculation. Final Value is %.4f", initial);
}