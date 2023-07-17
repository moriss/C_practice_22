/**
Contents:
Count the characters of a user's string input using a do while loop
***/



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
