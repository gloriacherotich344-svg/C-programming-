//variables and data types 
/*
Name:Gloria cherotich 
Reg no:CT100/G/30827/26

*/

#include<stdio.h>

int main() {

    //declare variable
    float volume, surfacearea,radius, height;
    double pi = 3.142;

    printf("Enter the value of radius: \t ");
    scanf("%f",&radius);

    printf("Enter the value of height:\t");
    scanf("%f",&height);

    volume = pi * radius * radius * height ;

    surfacearea = 2 * pi * radius * radius + 2 * pi * radius * height; 

    printf("The volume is: %.2f \n",volume);
    printf("The surface area is: %.2f \n",surfacearea);


    return 0;
}







    