INtroduction to Const

int const N = 10;//Const can be outside of main

int main(void)
{
    int num1 = 6;
    int num2 = 10;
    int num3 = N;
    
    printf("%i\n %i\n %i\n " , num1 + N , num2 + N , num3 + N);
}
###


int main(void)
{
    int const N = 10;//Can be used within main
    int num1 = 6;
    int num2 = 10;
    int num3 = N;

    printf("%i\n %i\n %i\n " , num1 + N , num2 + N , num3 + N);
}
##


int const N = 10;//Can be used outside of main and your own function
void my(void)
{

    int num1 = 6;
    int num2 = 10;
    int num3 = N;

    printf("%i\n %i\n %i\n " , num1 + N , num2 + N , num3 + N);
}
int main(void)
{
    my();
}
##


void my(void)
{
    int const N = 10;//Const can be used inside of your function
    int num1 = 6;
    int num2 = 10;
    int num3 = N;

    printf("%i\n %i\n %i\n " , num1 + N , num2 + N , num3 + N);
}
int main(void)
{
    my();
}
##



//I don't think I need to explain that it cannot go into main when using your own function (in the example above). 
##
