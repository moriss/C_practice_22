//create a function that takes an input
void my(int x);//Explicitly declare your function
int main(void)
{
    
    my(9);//Pass an input into your function (in this case its the number 9)
}


void my(int x)//Create your own
{
    for(int i = 0; i < x; i ++)
    {
        printf("HELLO \n");
    }
}

#########
//Create a function that uses an input from the user
void my(int x);//Explicitly declare your function
int main(void)
{
    int number = get_int("How many time do you want to Meeaow? ");//Prompt user for a  number
    
    my(number); //Pass the user;s number into your function
}


void my(int x)//Show your function as having an integer input
{
    for(int i = 0; i < x; i++)//Create a for loop with the condition that i, set to zero increments by one until it is not less than x
    {
        printf("Meeaow\n");//Print this to screen 'number' amount of times. (user's input)
    }
}
