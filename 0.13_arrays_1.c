//A gentle introduction to arrays.

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


//Arrays and for loops
int main(void)
{
      int n = get_int("Number of Assignments? ");
      int assignments[n];
      for(int i = 0; i < n; i ++)
      {
            printf("%i ", assignments[i]);//This seems to print out four random numbers which may be addressees?
      }
      
}
