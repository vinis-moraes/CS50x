#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("Type a name: ");
    int age = get_int("Type an age: ");
    int phone = get_int("Type a phone number: ");

    printf("Name: %s\n", name);
    printf("Age: %i\n", age);
    printf("Phone number: %i\n", phone);
}