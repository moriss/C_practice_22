//Avoid repeatedly asking a function the same question (typically within a loop) by [if possible] storing the function's result in a variable.

Example :

}
void my(char*s)
{
   ;//So you used a to store strlen of s rather than repeatedly asking the function directly. see below
   for(int i = 0; int a = strlen(s); i <a; i ++)//So now the condition is the number of integers in a 
   {
      printf("%c ", s[i]);
   }
}
   for(int i = 0; i < strlen(s); i ++)//This is the less optimal way of doing it as you continualy ask the function the same question.
//******************************/
