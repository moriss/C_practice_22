/**
Contents:
Change user string to all uppercase wit a do while loop
Count the characters of a user's string input using a do while loop
***/

//Change user string to all uppercase wit a do while loop
int main(void)
{
    char* name = get_string("Name: ");
    my(name);
}

void my(char*x)
{
    int i = 0;
    int capital = strlen(x);

    do
    {
        x[i] = toupper(x[i]);
        printf("%c ", x[i]);
        i ++;
    }
    while (i < capital);
}





//Count the characters of a user's string input using a do while loop
int my(char*x);
int main(void)
{
     char * name = get_string("Name: ");
     int result = my(name);
     printf("%i \n", result);
}

int my(string x)
{
     int i = 0;
     do
     {
          i ++;
     }
          while (x[i] != '\0');
          return i;
}
// Note here that at least 1 will always be returned as the do while checks for the condition AFTER the first loop.
