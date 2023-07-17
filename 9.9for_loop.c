
//Count number of chars in user's string using a for loop
int my(char*x);
int main(void)
{
     char * name = get_string("Name: ");
     int a = my(name);
     printf("%i ", a);
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
