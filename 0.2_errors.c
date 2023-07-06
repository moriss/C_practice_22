//6th july 23
//error: implicitly declaring library function 'strlen' with type 'unsigned long (const char *)'
//Remedy:
//You need to explicitly declare the string.h library function at the top
int main(void)
{
     string s = "hi!";
     for (int i = 0; i < strlen(s); i ++)

     printf("%c ", s[i]);
}

//12th June 23
//In this error:
// error: format specifies type 'double' but the argument has type 'int'
//Where you have perhaps used a double (%f) as a placeholder to print a sum using integers, you only need change one of the integers to say 3.0 (from 3) to allow C to infer you are working with double (or floating point numbers). It's a kind of hack!
 

//10th April 23
 second.c  -lcrypt -lcs50 -lm -o second
second.c:21:1: error: expected identifier or '('
//Above happened when the closing curly brace of your function was wrongly positioned BEFORE the end of the actual function.


//6th april 23
int main(void)
{
    int x = 0;//Set 'x' to zero
    do {
            printf("Q ");//print this then...
            //x ++ should be here.
        }
    while (x <= 2);//keep printing while 'x' is less than or equal to 2
    x ++;// Placing the incrementing int here, causes the program to run forever. 
 //I think this is because 'x' gets reset to zero (above) each time it loops.
    //It needs to be within the confines of the 'do' in this do while loop.
    //So the while condition keeps testing the 'do' part but in this case, the 'do' part is not incrementing 'a'.
}




###############

//LOGICAL ERROR, NOTHING PRINTS OUT (A BLANK SPACE) WITHOUT ANY ERRORS.
 //   This is a dumb one. I forgot to call my function in main. 
so, my(float x, float y;) was missing in main!
    
    
// error: implicit declaration of function 'my' is invalid in C99 
//I did not firstly explicitly declare the function: void my(void);
//It should be explicitly declared here  (above 'main') :

const int N=3;//I just thought I would throw in a curve ball 'const'  
int main(void)
{
    my();//Run my function in main
}

void my(void)
{
    int num1 = 6;
    int num2 = 10;
    int num3 = N;

    printf("%i\n %i\n %i\n " , num1 + N , num2 + N , num3 + N);
}
//If a name appears in a program and is not explicitly declared, it is implicitly declared
###############



//error: expected function body after function declarator. Reason: forgot curly braces right after void my(void): Fairly self explanatory.
void my(void)
    my();



//Ommiting a coma in printf between first string input and second input.
  printf("%i is greater than 3 \n"   /**coma goes here**/  N );//The placeholder is for the const N.




//When typing "make <filename> into comand line I got this:
make: *** No rule to make target 'first'.  Stop.
//Possible Reason: The file isn't at this location. Use ls in command line to check it's there.
  
    
    

// Less than or equal to
    error: expected expression
  while (i => 4) : // It must be done in the following order  while(i <=) , otherwise it doesn't work.
