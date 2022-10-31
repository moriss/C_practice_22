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
    int a = 0;
    while(1)
    {
        printf("Meaow\n");
        a ++;
    }
}
