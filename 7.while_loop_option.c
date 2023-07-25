/***
  Contents:
  Change user string to all uppercase wit a while loop
  Count the characters of a user's string input using a while loop
***/

int main(void)
{
    char * name = get_string("Name: " );
    my(name);
}

void my(char* x)
{
    int i=0;
    int a = strlen(x);
    while (i < a)
    {
        x[i] = toupper(x[i]);
        printf("%c ", x[i]);
        i++;
    }
    printf("\n");
}







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
