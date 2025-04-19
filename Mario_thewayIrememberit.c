#include <cs50.h>
#include <stdio.h>

//prototype for the preprocessor
void mario(int build);
void print_spaces(int n);
void print_hashes(int n);

//where it starts
int main(void)
{
    //get input for number of bricks printed
    int numcol;

    do
    {
        numcol = get_int("Hey, how big should this thing be? ");
    }
    while(numcol < 1);

    //print them
        mario(numcol);
    return 0;
}



/* ------------ helpers ------------ */


void print_hashes(int n)                //the blocks
{
    for (int i = 0; i < n; i++)
        printf("#");
}

void print_spaces(int n)                //the spaces
{
    for (int i = 0; i < n; i++)
        printf(" ");
}



void mario(int build)                   //printer
{
    for (int row = 1; row <= build; row++)          // 1 … height
    {
        int spaces = build - row;                   //declaring the spaces
        print_spaces(spaces);                       //    spaces
        print_hashes(row);                          //hashes
        print_hashes(row - 1);                          //  hashes (reversed)
        printf("\n");                                // ;-)
    }
}
