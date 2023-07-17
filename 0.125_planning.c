/**This file is for helping your brain to break down the individual tasks of coding which can ultmately be easily recogniesed 
and repeated. You can pick up where you left of in the cs50 ide new.c file.

/**
Contents: Thinking order for creating your own function ,  
carpet code practice
  counting chars 
  
**/
// Thinking order for creating your own function
//Write code that calls your own function in main and save it into a variable to be used elsewhere.
/***Task 1.  For counting the number of chars in a string
In main, start by getting the user input and calling your function (yet to be created) using correct datatype for output.
Also consider if you want to sae the results (return value) of your function into a functioin in main.
Now shift down to your own function-writing area representing the user's input with a placeholder
  Things to consider
    Data type of user's input and expected output of your function. 
    So your first line of code in your own function should be: output data type, name of function, input data type with placeholder
    Now using the placeholder input of your function, begin writing the detail.
    Remember that the placeholder represents the user input so see it as such.
    **/

carpet code practice
// counting chars 
//We can start with counting the lentgh of a users string input and placing the result in a variable.
/**
1. Ask user for a string input.
2. Do something with that input so in this case...
3. Count the characters of the user's string
4. By firstly using your own function written directtly into main
5. By secondly using your own function and calling it in main.
6. By thirdly using an existing library function.
7. Make sure to try in all loop functions (for, while and do while) 
Only save the latest below
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

