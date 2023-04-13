//Contents
//Some Terms , Anomalies , Const , Parity ,  User input 1  ,  While loop 1  ,  For loop one  ,  Own Function one

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
