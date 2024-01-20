#include <stdio.h>

enum day{sun = 1, mon = 2, tue = 3, wed  = 4, thu = 5, fri = 6, sat = 7}; //items in enum are constants and have a corresponding integer starting from 0 but can have a unique value

int main()
{
    //enum = a user defined type of names integer identifiers
    //helps make a program more readable //are treated as integers

    enum day today = thu;
   // printf("%d", today);

   if(today == sun || today == sat){
    printf("its the weekend");
   }
   else printf("its a weekday");

    return 0;
}