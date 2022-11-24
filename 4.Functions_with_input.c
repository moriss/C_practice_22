//Create a function that uses an input from the user
void my(int x);//Explicitly declare your function
int main(void)
{
    int number = get_int("How many time do you want to Meeaow? ");//Prompt user for a  number
    
    my(number); //Pass the user;s number into your function
}


void my(int x)//Show your function as having an integer input
{
    for(int i = 0; i < x; i++)
    {
        printf("Meeaow\n");
    }
}
