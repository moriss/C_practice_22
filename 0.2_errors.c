###############
// error: implicit declaration of function 'my' is invalid in C99 
//I did not firstly explicitly declare the function
//It should be explicitly declared here   void my(void);
int main(void)
{
    my();
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



//error: expected function body after function declarator. Reason: forgot curly braces right after:
void my(void){  }

//Ommiting a coma in printf between first string input and second input.
  printf("%i n is greater than 3 \n" , n );

//When typing "make <filename> into comand line I got this:
make: *** No rule to make target 'first'.  Stop.
//Possible Reason: The file isn't at this location. Use ls in command line to navigate to correct folder
  

// Less than or equal to
  while (i <= 4) : /*It must be done in this order*/. while(i =<) //doesn't work.
