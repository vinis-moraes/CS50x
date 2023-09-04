#include <cs50.h>
#include <stdio.h>

void build_pyramid(int n);
int main(void) 
{
    // Prompting the size
    int size;
    do
    {
        size = get_int("Height: ");
    } while (size < 1 || size > 8);

    // Building the pyramid
    
    build_pyramid(size);
}

void build_pyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n + i + 3; j++)
       {
        if (j == n || j == n + 1 || i + j < n - 1)
        {
            printf(" ");
        } else
        {
            printf("#");
        }
        
       }
       printf("\n");
    }
    
}