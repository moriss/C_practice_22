//print a block of hashes, 4 by 4
int main(void)
{
    for(int i = 0; i <=3; i ++)//Outer loop that runs while i is less or equal to 3
    {
    
        for(int j = 0; j <= 3; j ++)//Inner loop that prints the lines, again less or equal to 3
        {
            printf("# ");//Printing the hashes
        }
            printf("\n");//Line break occurs at end of fourth hash.
    }
}





//print a block of hashes, asking the user for the size.
int main(void)
{
    int n = get_int("How large do you want the block? :");

    for(int i = 0; i < n; i ++)//Outer loop that runs while i is less or equal to 3
    {

        for(int j = 0; j < n; j ++)//Inner loop that prints the lines, again less or equal to 3
        {
            printf("# ");//Printing the hashes
        }
            printf("\n");//Line break occurs at end of last hash.
    }
}




//print a block of hashes, asking the user for the size.
//Re-ask, if they entered an invalid number.
int main(void)
{
    int n;
    do
    {
        n = get_int("How large do you want the block? :");
    }

    while (n < 1);

    for(int i = 0; i < n; i ++)//Outer loop that runs while i is less or equal to 3
    {

        for(int j = 0; j < n; j ++)//Inner loop that prints the lines, again less or equal to 3
        {
            printf("# ");//Printing the hashes
        }
            printf("\n");//Line break occurs at end of last hash.
    }
}
