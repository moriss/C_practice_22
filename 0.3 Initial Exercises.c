//Contents: Syntactic Sugar,  const, Parity,

//Syntactic Sugar
//Ways of expressing incrementation
int counter +=1;
same as
int counter ++;
same as
int counter = counter + 1;




//Use const as a global variable or within main.
const int N = 3;//By convention, they are capitalised
//Use when you know you don't ever want the value of N to change
int main (void)
{
  int x = get_int("What number do you have? ");//Prompt the user for their number
  printf("Your number divided by N is %i \n", x / N);//Print out the answer to their number divided by N(3).
}



//Parity: Test if user's number is odd or even.
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
