/*
//variables and data types

name;Gloria cherotich 
reg no;CT100/G/30827/26
description ;task 2 assignment
date;18/09/2026

*/

#include <stdio.h>

int main () {
         //declare variables
         float height ; //%f
         double bankbalance; //%lf
         int phonenumber; //%d
         
         printf("Enter your height(In metres or centimetres); \t ");
         scanf("%f", &height);
         
         printf("Enter your bank balance( in kenya shillings);\t");
         scanf("%lf", &bankbalance);
         
         printf("Enter your phone number;\t");
         scanf("%d", &phonenumber);
         
         printf("My heigh is % .1f Meters/centimeters \n" , height);
         printf("My bank balance is Ksh % .2lf \n, ",bankbalance);
         printf("My phone number is % d \n", phonenumber);
         
         return 0;
         }

    