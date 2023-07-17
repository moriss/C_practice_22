#include <string.h>
//Use the string length (strlen library function) to save and print the string length of user's input
int my(char*x);
int main(void)
{
     char * name = get_string("Name: ");
     int a = strlen(name);
     printf("%i ", a);
}
