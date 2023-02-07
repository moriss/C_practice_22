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
