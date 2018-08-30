/*
 * This program will tell the user how many days a given month/year has. Including if it's a leap year or not.
 * Date: August 30th, 2018
 * Author: Alejandro Ramírez
 * E-mail: alex.ramirez.99@hotmail.com / A01412034@itesm.mx
 */

#include <stdio.h>

int main() {
    int month;
    signed int year;

    printf("Hello user. I will tell you how many days a month has.\n");
    printf("Please, tell me the month and year you want to know:\n");
    scanf("%i", &month);
    scanf("%i", &year);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days\n");
            break;
        case 2:
            if (year % 4 == 0) {                // this allows to get the correct form of february on a leap year
                printf("This month has 29 days.\n");
            } else {
                printf("This month has 28 days.\n");
            }
            break;
        default: printf("That is not a month!\n"); // devuelve error si el usuario proporciona un mes no valido
    }
    // en esta parte el programa devuelve al usuario cuántos días tiene un año, siendo año bisiesto o no
    if(year % 4 == 0) {
        printf("This year has 366 days.\n");
    } else {
        printf("This year has 365 days.\n");
    }
    return 0;
}