#include <stdio.h>
#include <cs50.h>
void my(void);
//Validating user input with a do while loop

int main(void)
{
    my();//Run your function in main with void input and output
}

void my(void)//my function
{
    int user_number;//declare a variable
    do
    {
        user_number = get_int ("Width: ");//Ask user for input, namely the "width"
    }
    while (user_number < 1);//If user's answer is less than 1, then they are asked again until they type 1 or above.
}
