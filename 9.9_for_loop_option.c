/****
Contents:
Count number of chars in user's string using a for loop
Converting user's string to all uppercase
****/
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



// Converting user's string to all uppercase
void my(char* s)
{
    for(int i = 0 ,  n=strlen(s) ; i < n ; i ++ )
    {
        printf("%i ", toupper(s[i]));
    }
}
