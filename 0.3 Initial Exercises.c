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
  int scores[N]; //Use the constant N throughout your code.
   scores[0] = 40;
   scores[1] = 65;
   scores[2] = 49;
   scores[3] = 95;

     printf("Average score is: %i \n", (scores[0] + scores[1] + scores[2] + scores[3]) / N);//And here also
}




//Parity: Test if user's number is odd or even.
int main(void)
{
    int n = get_int("Please choose a number ");
    if(n % 2 == 0)
    {
        printf("%i  is an even number \n " , n );
    }
    else
    {
        printf("%i  is an odd number \n " , n );
    }
    //if n is even, print "n is even" else print "n is not even.
}
