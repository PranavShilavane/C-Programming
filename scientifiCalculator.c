/*

This is a simple calculator program using C Programming Language.In this program for every operation (maths operation) there is a function. I have bought a proper coordination of function to make the output experience good. In this program some functions used to give color to the output screen which may not work in others machine ( ignore its warning in output console ). Other everything is fine.

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static int a, b;
char ch = 1;
void accept_two_numbers()
{
    printf("\n\t\t\tEnter two numbers : ");
    scanf("%d%d", &a, &b);
}

void addition()
{
    printf("\n\n\t\t\tAddtion of two numbers is  : %d", a + b);
}
void subtraction()
{
    printf("\n\n\t\t\tSubtraction of two numbers is  : %d", a - b);
}
void multiplication()
{
    printf("\n\n\t\t\tMultiplication of two numbers is  : %d", a * b);
}
void division()
{
    printf("\n\n\t\t\tDivision of two numbers is  : %.2f", (float)a / b);
}
void modulus()
{

    printf("\n\n\t\t\tModulus of two numbers is  : %d", a % b);
}
void power()
{
    printf("\n\t\t\tEnter the number and the power of the number : ");
    scanf("%d%d", &a, &b);

    int power = 1;
    for (int i = 1; i <= b; i++)
        power = power * a;

    printf("\n\t\t\t%d to the power %d is  : %d", a, b, power);
}
void factorial()
{
    printf("\n\t\t\tEnter the number : ");
    scanf("%d", &a);

    long int fact = 1;
    if ((a == 0) || (a == 1))
        fact = 1;
    else
        for (int i = 1; i <= a; i++)
            fact *= i;

    printf("\n\n\t\t\tFactorial of %d is : %d", a, fact);
}
void square()
{
    printf("\n\t\t\tEnter the number : ");
    scanf("%d", &a);

    printf("\n\n\t\t\tSquare of %d is : %ld", a, a * a);
}
void cube()
{
    printf("\n\t\t\tEnter the number : ");
    scanf("%d", &a);

    printf("\n\n\t\t\tCube of %d is : %ld", a, a * a * a);
}
void square_root()
{
    printf("\n\t\t\tEnter the number : ");
    scanf("%d", &a);
    a = (double)a;

    printf("\n\n\t\t\tSquare root of %d is : %.3f", a, sqrt(a));
}
void choice()
{
    int operation;
    system("cls");
    system("color E1");

    printf("---------------->>>   SCIENTIFIC CALCULATOR   <<<--------------\n\n");
    printf("\t\t\t1) Addition \n");
    printf("\t\t\t2) Subtraction\n");
    printf("\t\t\t3) Multiplication\n");
    printf("\t\t\t4) Division\n");
    printf("\t\t\t5) Modulus\n");
    printf("\t\t\t6) Power\n");
    printf("\t\t\t7) Factorial\n");
    printf("\t\t\t8) Square\n");
    printf("\t\t\t9) Cube\n");
    printf("\t\t\t10) Square root \n");
    printf("\n\t\t\t --->  ");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        system("color E1");
        accept_two_numbers();
        addition();
        break;
    case 2:
        system("color 1A");
        accept_two_numbers();
        subtraction();
        break;
    case 3:
        system("color A3");
        accept_two_numbers();
        multiplication();
        break;
    case 4:
        system("color B4");
        accept_two_numbers();
        division();
        break;
    case 5:
        system("color CA");
        accept_two_numbers();
        modulus();
        break;
    case 6:
        system("color F4");
        power();
        break;
    case 7:
        system("color E1");
        factorial();
        break;
    case 8:
        system("color A1");
        square();
        break;
    case 9:
        system("color D1");
        cube();
        break;
    case 10:
        system("color C1");
        square_root();
        break;
    }
    printf("\n\n\n\n\n\t\t\t");
    system("pause");
    choice();
}

int main()
{
    system("color f4");
    choice();
    return 0;
}

/*______________________________ SC [ C : Star ] ______________________________*/