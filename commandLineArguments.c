//command line arguments are used to pass additional info to a program when it is launched from a command line.
//In C programming, these arguments are passed to the main function through its parameters - argc, argv.

#include <stdio.h>

int main(int argc, char *argv){
  printf("hello world-%d\n", argc);
}
