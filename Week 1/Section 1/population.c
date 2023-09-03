#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get the starting number
    int starting = get_int("Starting number of llamas: ");
    // Get the ending number
    int ending = get_int("Ending number of llamas: ");
    float llamas = (float) starting;
    int years = 0;
    do
    {
        float add = llamas / 3;
        float remove = llamas / 4;
        llamas += add;
        llamas -= remove;
        years ++;
    } while (llamas < ending);
    printf("It will take %i years to get the goal!\n", years);
    
    
    
}