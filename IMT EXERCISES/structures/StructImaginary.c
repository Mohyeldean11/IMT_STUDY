#include "stdlib.h"
#include "stdio.h"

struct Number
{
    double real;
    double imaginary;
};

int main()
{

    struct Number first;
    struct Number second;
    struct Number* PTR;
    PTR=&first;
    puts("Enter the REAL PART AND THE IMAGINARY PART OF THE 1ST NUMBER");
    scanf("%lf %lf", &PTR->real,&PTR->imaginary);
    puts("Enter the REAL PART AND THE IMAGINARY PART OF THE 2ND NUMBER");
    scanf("%lf %lf",&second.real,&second.imaginary);
    printf("the sum of the numbers is %.2lf + %.2lfi",(PTR->real + second.real),(PTR->imaginary+second.imaginary));

}