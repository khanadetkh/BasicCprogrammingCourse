//
// Created by pakbung on 14-Jun-20.
//
#include <stdio.h>
#include <conio.h>
void main( ) {

    printf("\n[%s]", "Computer"); /* [Computer] */
    printf("\n[%2s]", "Computer"); /* [Computer] */
    printf("\n[%.3s]", "Computer"); /* [Com] */
    printf("\n[%10s]", "Computer"); /* [ Computer] */
    printf("\n[%-10s]", "Computer"); /* [Computer ] */
    printf("\n[%-10.3s]", "Computer"); /* [Com ] */
    printf("\n");
    printf("\n[%x]", 15); /* Hexa [f] */
    printf("\n[%o]", 15); /* Octal [17] */
    printf("\n");
    printf("\n[%d]", 100); /* [100] */
    printf("\n[%.2d]", 100); /* [100] */
    printf("\n[%10d]", 100); /* [ 100] */
    printf("\n[%-10d]", 100); /* [100 ] */
    printf("\n[%-10.2d]", 100); /* [100 ] */
    printf("\n");
    printf("\n[%f]", 32.5762); /* [32.576200] */
    printf("\n[%.2f]", 32.5762); /* [32.58] */
    printf("\n[%10.2f]", 32.5762); /* [ 32.58] */
    printf("\n[%-10.2f]", 32.5762); /* [32.58 ] */
    getch( );
}
