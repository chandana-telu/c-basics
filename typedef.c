#include <stdio.h>
#include <string.h>

//typedef char user[25];

typedef struct{
    char name[25];
    char password[12];
    int id;
}User;

int main(){

    //typedef = reserved keyword that gives an existing datatype a nickname

   // user user1 = "eren";

   User user1 = {"aagsf", "gsdfsdgh", 2133};
   User user2 = {"gagsf", "gsdfasfsdgh", 224133};


    return 0;
}