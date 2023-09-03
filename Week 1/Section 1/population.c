#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Get the starting number
    int starting;
    do
    {
        starting = get_int("Starting number of llamas: ");
    } while (starting < 9);
    
    // Get the ending number
    int ending;
    do
    {
        ending = get_int("Ending number of llamas: ");
    } while (ending <= starting);
    
    // Calculate the years
    float llamas = (float) starting;
    int years = 0;
    do
    {
        llamas += llamas / 12;
        years ++;
    } while (llamas < ending);
    printf("It will take %i years to get the goal!\n", years);
}