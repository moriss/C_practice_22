//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//Using Boolean: Typeing 'while(1)' is a boolean (true) expression. (0 is false).
//It can be used in the way below however the code will not print 3 times as initially expected.
//This is because the incrementing 'a' by 1, resets a as 1 (from zero) so the while condition remains true
//ie 'it is now true that 'a' is 1' and so on and so on.
// Hit ctrl c to kill the program otherwise it will run 'forever'.
// To further test this, if you switch from 1 to zero, nothing should type. 

#include <stdio.h>
//Print meeaow 3 times
int main(void)
{
    int a = 0;//At first, a is 0 but in the following loop, a becomes one and then two and then three etc etc forever.
    while(1)//This tests that 'a' is whatever 'a' is above, depending on which loop its on (first, second third etc) Therefore, always true
    {
        printf("Meaow\n");//This will print infinitely
        a ++;
    }
}

//Below is a correct way to do it and it still uses a boolean expression.
int a = 0;
    while(a <= 2)
    {
        printf("Meaow\n");//This printing will stop when a is less or equal to 2
        a ++;//Increments by 1 each time this function loops.
    }
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
