#include <stdio.h>
#include <stdlib.h>

int addTen(int x){
    printf("x in addTen = %d\n", x);
    x += 10;
    return x;
}

int main(){
    int x = 20;
    int y = addTen(x);
    printf("in main x = %d, y = %d\n", x, y);    
}