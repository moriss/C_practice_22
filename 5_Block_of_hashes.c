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
