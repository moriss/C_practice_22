//A gentle introduction to arrays.
//Arrays and for loops
int main(void)
{
      int n = get_int("Number of Assignments? ");
      int assignments[n];
      for(int i = 0; i < n; i ++)
      {
            printf("%i ", assignments[i]);//This prints out garbage data! Explanation below
      }
      /**The i in the assignments array represents the location of each element in the array depending on where you are in the for loop.
      In other words, the i in the for loop matches the indexed postion of the array's elements. 
      So the first i in the for loop points to the first element in the array and so on. 
      As you loop through each i in the for loop, this same i points to the corresponding element in the array. 
      The contents of each memory location is just garbage leftover data. **/
}


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


