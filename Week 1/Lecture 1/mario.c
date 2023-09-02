#include <stdio.h>
#include <cs50.h>

// Reminds the compiler that these functions will exist
int get_size(void);
void print_grid(int size);
// Main Program
int main(void)
{
    // Get size of grid
    int n = get_size();
    // Print grid of bricks
    print_grid(n);
}
// Function "get_size", with no input and an integer as output
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } 
    while (n < 1);
    return n;
}
// Function "print_grid", with an integer as input and no output
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}