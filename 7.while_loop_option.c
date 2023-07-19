/***
  Contents:
  Count the characters of a user's string input using a while loop
***/

// Count the characters of a user's string input using a while loop
int my(char*x);
int main(void)
{
     char * name = get_string("Name: ");
     int answer = my(name);
     printf("%i \n", answer);
}

int my(char*x)
{
     int i = 0;
     while(x[i] != '\0')
     {
          i++;
     }
