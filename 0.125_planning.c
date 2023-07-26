Contents: 
/** Introduction
  A Guide 
  Counting Chars
  Change chars all to uppercase
**/

/**Introduction
This file catapults any tasks from description to planning to implementation. Implementatioin requires that tasks are performed in different ways then added to the relevant files. 
Different ways include using different loops (for the same task) and other approaches to be added as you learn them. 

So we begin with a description, then a mental planning, then writing the code. 
It is assumed you always write your own function and where possible return a value and save it in a variable to be used later.



//A Guide:
//In main, start by working out what you need from the user then using this as input to your -yet to be created -function. 
//Remember to use the correct datatypes and consider if your function will have an output to be saved into a variable.
//Now shift down to your own function-writing area representing the user's input with a placeholder
  Things to consider
    //Data type of user's input and expected output of your function. 
    //So your first line of code in your own function should be: output data type, name of function, input data type with placeholder
    //Now ,using the placeholder input of your function, begin writing the detail.
    Remember that the placeholder represents the user input so see it as such.
    //Try different ways to write the code ie for, while and do while loops then save what you think is the best way below.
    **/


// Counting Chars 
//We can start with counting the lentgh of a users string input and placing the result in a variable.
/**
1. Ask user for a string input.
2. Do something with that input so in this case...
3. Count the characters of the user's string
4. By firstly using your own function written directtly into main
5. By secondly using your own function and calling it in main.
6. By thirdly using an existing library function.
7. Make sure to try in all loop functions (for, while and do while) 
Only save below the one that you think is the best approach.
**/
  {
     char * name = get_string("Name: ");
     int result =  my(name);
     printf("%i  ", result);
}

int my(char* x)
{
     int add= 0;
     for(int i = 0; x[i] !='\0'; i++)
     {
          add++;
     }
     return add++;;
}




//Change chars all to uppercase
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










