// #include <stdio.h>
// #define if 1

// int main(){
//     char c = 'a';
//     int a = 100; // 0x110111 0b
//     int b = 0b1011;
//     int d = 0xAC1;
//     long e = 1000000;
    
//     float f = 1.92;
//     double g = 1.2323;

//     char name[] = "Dew";
//     printf("%c %d %15.2f %ld\n", c, if, f, e);
//     c += 2;
//     printf("%c %d\n", c, c);

//     float q = 1/2.0;
//     printf("%f\n", q);

//     printf("%s\n", name);

// }
// // gcc lab01-200.c -o lab01
// // ./lab01

// #include<stdio.h>
// int main() {
//     int computer_time = 1678;
//     int day = computer_time / 1440;
//     int hour = computer_time % 1440 / 60;
//     int minute = computer_time % 60;
//     printf("It is %d days %d hours and %d minutes.\n", day, hour, minute);

//     return 0;
// }

// #include<stdio.h>
// #include <stdlib.h>

// #define PI 22.0/7

// int main() 
// {
//     float radius = 1.5;
//     float vol = 4/3.0 * PI * (radius*radius*radius);
//     printf("The volume of this sphere is %.2f", vol);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     float preGrade = 1.75;
//     int preCredit = 21;
//     int credit = 18;
//     float requiredGrade = 2.00;
//     //requiredGrade = (preGrade * preCredit) + (x * credit)/ (preCredit + credit)
//     float x = ((requiredGrade * (preCredit + credit)) - (preGrade * preCredit)) / credit;
//     printf("The GPA this semester should be %.2f", x);
//     return 0;
// }

