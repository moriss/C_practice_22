//create a function that takes an input

//Q: What is the simplest way to pass a value from main into your own function?
void my(int x);//Explicitly declare your function
int main(void)
{
    
    my(99);//Pass an input into your function (in this case its the number 99)
}


void my(int x )//declare the datatype that is to be inputed into your function
{
        printf("%i \n", x);//print it out as a int
        printf("%c \n", x);//or print a char representted by the number 99 which is the lowercase 'c'.
}
##





void my(int x);//Explicitly declare your function
int main(void)
{
    
    my(9);//Pass an input into your function (in this case its the number 9)
}


void my(int x)//declare the datatype that is to be inputed into your function
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


void my(int x)//Your function with an integer input
{
    for(int i = 0; i < x; i++)//Create a for loop with the condition that i, set to zero increments by one until it is not less than x
    {
        printf("Meeaow\n");//Print this to screen 'number' amount of times. (user's input)
    }
}

//functions with input and output
//Firstly, everything in main
int main(void)
{
    float price = get_float("What is the original price?");//ask user for a price
    float discount = price * .85;//Discount by 15%
    printf("%2.f  is your discounted price \n ", discount);//Print new discounted price
    return discount;//Return new discounted price
}


//Secondly with your own function
float my(float user_input);//Your Function's Prototype on top
int main(void)
{
    float price = get_float("What is the original price? ");//ask user for a price
    my(price);//Drop 'price' into your function
}

float my(float user_input)//Your function takes one float input
{
    float discount = user_input * .85;//Discount by 15%//Multiply price by desired discount
    printf("%2.f  is your discounted price \n ", discount);//Print new discounted price
    return discount;//Return new discounted price
}


//STOPPED HERE
//Below is correct, but change it so that the discount (as a percentage) is minused from the original price
float my(float user_input ,float user_discount);//Your Function's Prototype on top
int main(void)
{
    float price = get_float("What is the original price? ");//ask user for a price
    float offer = get_float("What percentage discount would you like? ");//ask user for desired discount
    my(price, offer);//Drop 'price' and 'offer' into your function
}

float my(float user_input ,float user_discount)//Your function takes one float input
{
    float discount = (user_input / 100) * user_discount;//Discount by 15%//Multiply price by desired discount
    printf("%2.f  is your discounted price \n ", discount);//Print new discounted price
    return discount;//Return new discounted price
}



//Below returns a value from your function and passes it into main.
int main(void)
{
    //Allow someine to choose their own discount for a product on sale.
    //how much is the product?
    int original_price = get_int("How much is the product? :");
    //What discount do you want as a percentage
        float percent_discount = get_float("What percentage discount would you like? :");
    //print: This is your new disounted price.
    float a = my(original_price, percent_discount);
        printf("Your new discounted price is: %2.f  \n", a );
}

float my(float x, int y)
{
    return x * (100 - y) / 100;//I wrote this out at the back of my filofax for quick reference.
    //return:
}


################
int main(void)//Ask user for number of Q's they would like printed onto the screen
//Then print that number onto the screen.
{
    int qs = get_int("How many q's would you like: ");//Ask user for input
    my(user);//Run your program here with above as your input
}
void my(int userp)//Your function has one integer input. 
{
    int counter = 1;//Initially set your incrementing counter to 1
    do
    {
        printf("Q \n");// 'do' will print Q first before testing below.
        counter ++;// Increment counter by 1 at each loop
    }
    while(counter <= userp);// Test counter is less than or equal to user input
}
