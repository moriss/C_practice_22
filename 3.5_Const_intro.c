INtroduction to Const
//This first example is NOT using a const. This means that the variable 'a' can change throughout the programm
int a=5;
int main(void)
{
    printf("%i  \n", a);
    a=6;
    printf("%i  \n", a);
}

//This second example is using a const. This means that the variable 'A' CANNOT change within the programm
const int A=5;
int main(void)
{
    printf("%i  \n", A);
    a=6;
    printf("%i  \n", A);
}//This throws up an error <>



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



//I don't think I need to explain that it cannot go into main when using your own function. 

//A way around this however is as below
 void my(const int T);
int main(void)
{
    int const N = 10;//Main has a const int N asigning it 10
    my(N);
}


void my(const int T)//Your functions must input a const int so you need to declare it here.
{
    //Const can be used inside of your function
    int num1 = 6;
    int num2 = 10;
    int num3 = T;

    printf("%i\n %i\n %i\n " , num1 + T , num2 + T , num3 + T);
}

##
