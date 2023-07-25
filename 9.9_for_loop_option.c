/****
Contents:
Converting user's string to all uppercase using a for loop
Count number of chars in user's string using a for loop

****/


// Converting user's string to all uppercase using a for loop
void my(char* s)
{
    for(int i = 0 ,  n=strlen(s) ; i < n ; i ++ )
    {
        printf("%i ", toupper(s[i]));
    }
}




//Count number of chars in user's string using a for loop
int my(char* x)
{
    int add = 0;
    for(int i = 0, n=strlen(x); i < n; i++ )
    {
        add++;
    }
    return add;
}



int my(char*x)
{
     int add=0;
     for(int i = 0; x[i] != '\0'; i++)
     {
          add++;
     }
     return add;
}



