#include <stdio.h>

int main(){
    // format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1f = decimal precision
    // %n.f= minimum field width(I'd like to add n spaces worth of room to display the no.)
    // %. =left align(round it to the max no.)
     
     float item1 = 5.75;
     float item2 = 10.00;
     float item3 = 100.99;

     printf("item 1: $%f\n", item1);

     /*
     to format the output, we can set the decimal precision of a float or double.
     After the format specifier add a dot and the amount of digits you'd like to display.
     Ex: %.2f  will display only 2 digits
     */

    printf("item 1 = $%.2f", item1);
    printf("item 1 = $%10.2f", item1);
    printf("item 1 = $%.f", item1);

     return 0;
}