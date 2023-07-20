//Avoid repeatedly asking a function the same question (typically within a loop) by [if possible] storing the function's result in a variable.

Example :

}
void my(char*s)
{
   int a = strlen(s);//So you used a to store strlen of s rather than writing the function directly into the loop. see below
   for(int i = 0; i <a; i ++)//So now the condition is the number of integers in a 
   {
      printf("%c ", s[i]);
   }
}
   for(int i = 0; i < strlen(s); i ++)
//******************************/
