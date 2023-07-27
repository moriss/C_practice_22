/****
Contents:
Converting user's string to all uppercase using a for loop
Count number of chars in user's string using a for loop

****/


// Converting user's string to all uppercase using a for loop
void my(char*x)
{
    for(int i = 0, length = strlen(x); i<length; i ++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')//integers can also be used here (97 and 122 respectviely)
        {
            x[i] = x[i] -32;// Minusing 32 from small letters outputs capital letters.
        }
        printf("%c ", x[i]);
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



