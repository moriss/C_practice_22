//This file is dedicated to helping your brain to break down the individual tasks of coding. 

//We can start with counting the lentgh of a users string input. 
/**
1. Ask user for a string input.
2. Do something with that input such as...
3. Count the characters of the user's string
4. By firstly using your own function written directtly into main
5. By secondly using your own function and calling it in main.
6. By thirdly using an existing library function.
7. Try using a for, while and do while loop 
**/
//4.
  int main(void)
{
     char * name = get_string("Name: ");
     int add = 0;
     for(int i = 0; name[i]!= '\0'; i++)
     {
          add ++;
     }
     printf("%i \n" ,add);
}
