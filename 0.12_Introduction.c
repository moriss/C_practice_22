//Contents
#######
//Some Terms ,  clang  ,  Anomalies , Const , Parity ,  User input 1  ,  While loop 1  ,  For loop one  ,  Own Function one  ,  Include Headers.c  ,   operators ,  Datatypes  ,  Formats for datatypes  ,   Placeholders  ,  true and break ,  integer overlfow  ,  Truncation  , Casting  , round function  ,  

// end of week 1
#######



//Some Terms
//Modularising our code
//He said this when he created his own function. 

//Implicitly and Explicitly
//Ie The prototype at the top of a file explicitly declairs your function further down the file.
//EG void my(int a);

//syntactic sugar : A shorthand way of writing code

//"You cannot compair strings for equality"

//i = i + 1    Can be referred to as a line of logic

//Convention: Just the way things have and continue to be done. (Generally understood rules)

//Scope: Generally speaking, for loops (unlike while loops) keep the variables within its own function and variables within a while loop can be used else where in your code

//Visual side effets: Like printing something to the screen. This isn't returning something, it's simply printing the result of something.




//clang
//In week 2
//Excecutable just means runnable.  'make' runs clang . Do the following to run clang manualy: 
clang hello.c  //hello.c is just the name I gave to the file in this illusttration.
// clang then creates a 'binary' file called a.out.  By default It stands for assembler output.
// make allows us to customise a.out to the name of our file. so  make hello  creates hello instead of a.out
// We can also do this with clang via a comand line argument which clang supports:
clang -o hello hello.c  //This lets you explicitly specify what you want your filename to be called. 
//If you now view a list of files in your directory, you will see  hello.c, so you can ./hello.c to run it.
  
/**Understanding the extra step required in clang.
undefined reference to get string 
This is where you use clang to run your function 

The thing to think about here is that this is as if get_string is not recognised by clang. ie It doesn't exist or mean anything.
This means that make is doing something else for us that clang is not. make effectively gives the compiler a heads-up that the libraries that hold these functions exist.

by having the #include headers at the top of the file teaches the compiler that a functions will exist when needed.

So with clang, we need to tell the compiler to link-in code (that someone else wrote some time ago) in these libraries. make does this automatically but clang requires another step.
Steps:
Output a file called hello
clang -o hello 
Compile a file called hello.c
hello.c
Link-in the binary code (created by someone else) for get_string and printf etc.
-lcs50

Of course you need to write this as one line of code: clang -o hello hello.c -lcs50  **/
                    


    
    



//Anomalies
//Normally, printf requires curly braces (after the for loop) but seems to work fine like this. Ie, No Errors!

void my(int x)
{
    for(int i = 0; i < x; i ++)
        //No Curly Braces Here
        printf("God \n");
        //No Curly Braces Here
}



//Const
//Use const as a global variable or within main.
const int N = 3;//By convention, they are capitalised
//Use when you know you don't ever want the value of N to change
int main (void)
{
  int x = get_int("What number do you have? ");//Prompt the user for their number
  printf("Your number divided by N is %i \n", x / N);//Print out the answer to their number divided by N(3).
}




//Parity 
//Test if user's number is odd or even.
int main(void)
{
    int n = get_int("Please choose a number ");//Ask user for a number
    if(n % 2 == 0)//If n divided by two has a remainder of 0...
    {
        printf("%i  is an even number \n " , n );//Print this to the screen....
    }
    else
    {
        printf("%i  is an odd number \n " , n );//Otherwise, print this to the screen.
    }
}



// User input 1
//Create a function that asks the user to agree or disagree
int main(void)
{
    char yes = get_char("Do you agree to the t and c's? ");//Ask user if they agree to t and c's
    if(yes == 'y' || yes == 'Y')//If lowercase or capital Y typed...
    {
        printf("Agreed\n");//Print this
    }
    else if(yes == 'n' || yes == 'N' )// If lowercase or capital N typed...
    {
        printf("Disagree \n");//Print this
    }
  
  
  
//  While loop 1
  //Print Meeaow 3 times with a while loop
int main(void)
{
    int a = 0;//Here, 'a' can be used elsewhere in your code. It's scope is wider than this while loop.
    while(a <= 2)
    {
        printf("Meaow\n");
        a ++;
    }
        printf("%i ", a);//So a here can be printed fine because its scope is beyond the while loop. a = 3 because the inner while loop must finish running (while the condition is true), before the second printf is printed to the screen.
}
  
  
 
 // For loop one 
 //Print meeaow 3 times using a for loop
int main(void)
{
    for(int i = 0 ; i <= 3 ;  i ++)//'i' cannot be used anywhere else in your code. It's scope is within the for loop.
    {
        printf("Meaow\n");
    }
        printf("%i ", i);//This will throw up an error. 'i' is deemed undeclared as it's outside the scope it was used for.
}
  
  
  
//  Own Function one
  //Print meeaow 3 times using your own function
  void meeawo(void)
{
    for(int i = 0; i < 3; i ++)
    {
        printf("Meeaow\n");
    }
}

int main(void) 
{
    meeawo();
}
//Above is just to show it can be done this way. By convention, main sits at the top with your programm's prototype at the top and the detail down below somewhere.
    
    

    
// Include Headers.c
#include <cs50.h>//Contains get_int, get_string
#include <stdio.h> //Contains printf
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
    
    
    
    
//  operators
// And there are some mathematical operators we can use:
// == For is eqaul to. AKA the equality operator. A single = is the assignment operator. (copies from right into left)
// + for addition
// - for subtraction
// * for multiplication
// / for division
// % for remainder (modulu) The remainder when two numbers are divided together.
// || The or operator
// && The and operator


    
    
// Datatypes
bool	1 bite  // EG:if(x > y), is boolean since it can only be either yes or no or true or false
char	1 bite //  A single character like 'a' or 't' (Note that single quotes are used for chars).
int	4 bites // roughly up to 2 billion (taking into account negative numbers)
float	4 bites // A floating-point value, or real number with a decimal value
double	8 bites // A floating-point value roughly double in size of a float.
long 	8 bites // To 4 billion and beyond. Use this for more precision
string  //An indeterminate number of bytes since it can be a whole book
void //, a type but not a data type. For functions that don't return a value eg printf. The Result is not captured and stored,  just printed on screen 
//(as a side event). Therefore, printf is a void function.

// void my(void)  : parameters can also be void. EG: no arguments get passed into main.
    
    
    
    
//  Formats for datatypes 
//And the CS50 library has corresponding functions to get input of various types:
// Its best to declare a variable just when you need it (scope).
get_string //:Frome the cs50 library
get_char  //: only 1 byte of memory for individual characters.
get_float  //:real (decimal) numbers contained in 4 bytes of memory
get_double // For storing floating point numbers. Double precision compared to floats. So: are contained in 8 bytes of data.
get_int //: 4 bytes of memory or 32 bits, 50% pos numbs, 50% negatives -2 to the 31st and 2 to the 31st - 1
// range= approx negative 2 billion to positive 2 billion
// unsigned int : Only allows positive numbers thus doubling positive's range to approx 4 billion 

 
    
    
    
//  Placeholders
// For printf, too, there are different placeholders for each type:
%c //for chars
%f //for floats, doubles  NB %.2f Returns 2 decimal places
%i // for ints
%li // for longs
%s // for strings
    

    
    
//true and break
    int ask;
    while (true)//While below is true... NB; THE 'TRUE' VALUE CAN ALSO BE THE NUMBER 1  eg: while (1)
    {
        ask = get_int("How large do you want the block to be? :");
        if (ask > 0)
        {
            break;//...then break out of this loop
        }
    }
    
    
//Integer overflow
//Happens when more numbers are explicitly declared than bytes asigned to it.
// AKA floating point imprecission
    int main(void)
{
   float a = get_int("Number 1: ");
   float z = get_int("Number 2: ");
   printf("=%.50f \n " , a / z);
}

//Returns =0.10000000149011611938476562500000000000000000000000 
    
// Interestingly, this became a worry at the turn of the century (year 2000), as many computers stored the year with only two bits to save on memory (99 instead of 1999). This problem was solved, however, 2038 could be the next problem. This is because computers count time in seconds from the Unix epoc being arbitraraly january 1st 1970. Most computers use 32 bits to count the number of seconds from this date which means a maximum of roughtly 2 billion seconds which is going to happen in 2038. The result being that you end up with a very large negative number since the leftmost number signals negativity if it is set to 1. The answer of course is to increase the number of bits from 32 to 64.

    
    
// Truncation
//Where two intergers are being divided and the answer is 0.something then c will return just all zeros. So when dividing two integers, c will only be able to provide you with an integer as an answer. ie 0. This is known as truncation.
    // The solution to this is 'type conversion'. We can tell the computer we want to treat the integer as though it's a floating point number value. This can be down by 'casting'
    
    
// Casting
int main(void)
{
   int a = get_int("Number 1: ");
   int z = get_int("Number 2: ");
   float j = (float) a / (int) z;
   printf("=%.50f \n " , j);
}
//Interestingly, only one of the integers need to be casted as a float. (a).
    
    
    
// round function
// This helps with better precision
    #include <math.h>
int main(void)
{
   float dollar = get_int("Dollar ammount:  ");
   int pennies = round(dollar * 100);

   printf(" %i \n " , pennies);
}
// Where 4.20 dollars was typed by the user without the 'round' function, the answer would be 419 pennies instead of 420 as it should be.
    
    
// End of week 1
