//Normally, printf requires curly braces (after the for loop) but seems to work fine like this. Ie, No Errors!

void my(int x)
{
    for(int i = 0; i < x; i ++)
        //No Curly Braces Here
        printf("God \n");
        //No Curly Braces Here
}
