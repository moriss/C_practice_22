//A gentle introduction to arrays. Arrays are very useful as they eliminate the need to have multiple variable names. Instead you have one variable with a whole list of elements.
//The index of an array is whatever is in the square brackets. Using the i in a for loop is common practice in being able to access elements in and array. As i starts with zero, so does the first element of the array. Placing the i in the arrays square brackets will allow you to ittirate through the elements as the for loop ittirates through through the conditional for loop.
//Displaying the memory locations of an array's elements.
int main(void)
{
      int n = get_int("Number of Assignments? ");//Here we are asking the user for a number and assigning it a variable n.
      int assignments[n];//Variable n is placed in the assignments array giving the array the size of n.
      for(int i = 0; i < n; i ++)//The for loop condition to be less than n and increment by one at each itiration.
      {
            printf("%i ", assignments[i]);//This prints out garbage data! Explanation below
      }
      /**The i in the assignments array represents the location of each element in the array depending on where you are in the for loop. 
      In other words, the i in the for loop matches the indexed postion of the array's elements. 
      So the first i in the for loop points to the first element location in the array and so on. 
      As you loop through each i in the for loop, the i in the array gives you access to the corresponding element location in the array. 
      for loop index 0 corresponds to array[index 0]  , for loop index 1 corrresponds to array[index 1]  and so on...
      The contents of each memory location is just garbage leftover data so it doesn't mean anything. **/
}

stopped here for revision 

//Assigning incrimenting digits to the 'assignments' array elements.
int main(void)
{
      int n = get_int("Number of Assignments? ");
      int assignments[n];
      for(int i = 0; i < n; i ++)
      {
           assignments[i] = i + 1 ;//Here you are assigning the for loop's i'ths to the array's element's memory locations
           printf("%i \n" , assignments[i]);//So in this case, numbers 1 2 3 4 etc will be assigned to these memory locations (above).
      }
}



//Assigning user's values to an arrays elements
int main(void)
{
      int adder = 0;
      int n = get_int("Number of Assignments? ");
      int assignments[n];
      for(int i = 0; i < n; i ++)
      {
           assignments[i] = get_int("Score   %i = " ,  i + 1) ;//Assigning user input to each element in the array in order.
           adder = adder + assignments[i];//adder is used to add the values together.
      }
      printf("Average score is %i " , adder / 3);//We now print the average of these scores.
}



//Spell out your name one letter at a time in an array. My experiment!
int main(void)
{
      int n = get_int("How many letters in your name ?");
      char  name[n];//A char with arrays!
      for (int i = 0; i < n; i ++)
      {
          name[i] = get_char("Letter %i " , i + 1);//User inputs a letter at each incriment.

      }
}
//So it seems that the char or char* datatypes can also be arrays (as above)
//Please note that if you type more than one character when using the string or char * datatype, you will keep being prompted until you provide a character (rather than a string or word)






//Very basic use of an array to print out 3 hard coded integers to be averaged.
int main(void)
{
	int scores[3];
	scores [0] = 55;
	scores [1] = 40;
	scores [2] = 99;
	
	printf("Average = %i\n ", (scores [0] + scores [1] + scores [2]) / 3);
}

//This time ask for user input
	int scores[3];
	scores [0] = get_int("first score = ");
	scores [1] = get_int("second score = ");
	scores [2] = get_int("third score = ");
	
	printf("Average = %i\n ", (scores [0] + scores [1] + scores [2]) / 3);


