/**Contents
Use the string length (strlen library function) to save and print the string length of user's input
Use library functions to convert any lowercase letters to uppercase
**/

#include <string.h>
//Use the string length (strlen library function) to save and print the string length of user's input
int my(char*x);
int main(void)
{
     char * name = get_string("Name: ");
     int a = strlen(name);
     printf("%i ", a);
}




//Use library functions to convert any lowercase letters to uppercase
void my(char*x)
{
    for(int i = 0, length=strlen(x) ; i<length; i ++)
    {
        if (isupper(x[i]))
        {
            printf("%c ", x[i]);
        }

        else
        {
            x[i] = toupper(x[i]);
            printf("%c ", x[i]);
        }

    }
}
