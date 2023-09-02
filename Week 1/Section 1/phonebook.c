#include <stdio.h>
#include <cs50.h>
// Main part of this program
int main(void)
{
    // Getting informations
    string name = get_string("Type a name: ");
    int age = get_int("Type an age: ");
    string phone = get_string("Type a phone number: ");
    // Confirming informations
    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone number: %s\n", phone);
}