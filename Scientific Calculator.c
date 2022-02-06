#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#define PI 3.14
#define INF 1/0 
int main()
{
    int choice,a,b;
    float x,y,r;
    do
    {
        printf("\t\tSelect your operation from below\n");
        printf("1)Addition\t2)Subtraction\t3)Multiplication\t4)Division\n");
        printf("5)X^2\t6)X^3\t7)X^Y\n");
        printf("8)X^(-1)\t9)X^(1/2)\t10)X^(1/3)\t11)X^(1/Y)\n");
        printf("12)10^x\t13)X!\t14)Modulus\t15)log10(x)\n");
        printf("16)Sinx\t17)Cosx\t18)Tanx\t19)Sin^(-1)x\t20)Cos^(-1)x\t21)tan^(-1)x\n");
        printf("CHOICE:");
        scanf("%d",&choice);
        if (choice==0)
         exit(0);
        switch (choice)
        {
        case 1://Addition
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        r=x+y;
        printf("\nResult:%f",r);
        break;
        case 2://Subtraction
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        r=x-y;
        printf("\nResult:%f",r);
        break;
        case 3://Multiplication
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        r=x*y;
        printf("\nResult:%f",r);
        break;
        case 4://division
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        if (y==0)
         printf("Invalid value");
        else 
         r=x/y;
        printf("\nResult:%f",r);
        break;
        case 5://square
        printf("Enter X:");
        scanf("%f",&x);
        r=pow(x,2);
        printf("\nResult:%f",r);
        break;
        case 6://cube
        printf("Enter X:");
        scanf("%f",&x);
        r=pow(x,3);
        printf("\nResult:%f",r);
        break;
        case 7://normal powers
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        r=pow(x,y);
        printf("\nResult:%f",r);
        break;
        case 8://mutiplicative inverse
        printf("Enter X:");
        scanf("%f",&x);
        r=pow(x,-1);
        printf("\nResult:%f",r);
        break;
        case 9://square root
        printf("Enter X:");
        scanf("%f",&x);
        y=2;
        r=pow(x,(1/y));
        printf("\nResult:%f",r);
        break;
        case 10://cube root
        printf("Enter X:");
        scanf("%f",&x);
        y=3;
        r=pow(x,(1/y));
        printf("\nResult:%f",r);
        break;
        case 11://yth root
        printf("Enter X:");
        scanf("%f",&x);
        printf("Enter Y:");
        scanf("%f",&y);
        r=pow(x,(1/y));
        printf("\nResult:%f",r);
        break;
        case 12://power of 10
        printf("Enter X:");
        scanf("%f",&x);
        r=pow(10,x);
        printf("\nResult:%f",r);
        break;
        case 13://factorial
        printf("Enter X:");
        scanf("%f",&x);
        for (int i=1;i<=x;i++)
          r=r*i;
        printf("\nResult:%f",r);
        break;
        case 14://modulus
        printf("Enter X:");
        scanf("%d",&a);
        printf("Enter Y:");
        scanf("%d",&b);
        r=a%b;
        printf("\nResult:%f",r);
        break;
        case 15://log with base 10
        printf("Enter X:");
        scanf("%f",&x);
        r=log10(x);
        printf("\nResult:%.2f",r);
        break;
        case 16://sine of a funciton
        printf("Enter X:");
        scanf("%f",&x);
        r=sin(x*PI/180);
        printf("\nResult:%.2f",r);
        break;
        case 17://cosine of a function
        printf("Enter X:");
        scanf("%f",&x);
        r=cos(x*PI/180);
        printf("\nResult:%.2f",r);
        break;
        case 18://tangent of a function
        printf("Enter X:");
        scanf("%f",&x);
        if (x=90,270)
         printf("NOT DEFINED");
        r=tan(x*PI/180);
        printf("\nResult:%.2f",r);
        break;
        case 19://finding sin^-1 of a function
        printf("Enter X:");
        scanf("%f",&x);
        r=sinh(x);
        printf("\nResult:%.2f",r);
        break;
        case 20://cos^-1 of a function
        printf("Enter X:");
        scanf("%f",&x);
        r=cosh(x);
        printf("\nResult:%.2f",r);
        break;
        case 21://tan^-1 of a function
        printf("Enter X:");
        scanf("%f",&x);
        if (x= INF)
         printf("PI/2");
        else if (x=-INF)
         printf("3PI/2");
        else
         r=tanh(x);
         printf("\nResult:%.2f",r);
        break;
        default:
        printf("\nInvlid Choice");
        }
    }while(choice);
    getch();//for returning to previous screen
    return 0;
} 