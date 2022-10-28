



//Syntactic Sugar
//Ways of expressing incrementation
int counter +=1;
same as
int counter ++;
same as
int counter = counter + 1;




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
