#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
//Use const as a global variable or within main.
const int N = 3;//By convention, they are capitalised
//Use when you know you don't ever want the value of N to change
int main (void)
{
  int scores[N]; //Use the constant N throughout your code.
   scores[0] = 40;
   scores[1] = 65;
   scores[2] = 49;
   scores[3] = 95;

     printf("Average score is: %i \n", (scores[0] + scores[1] + scores[2] + scores[3]) / N);//And here also
}
