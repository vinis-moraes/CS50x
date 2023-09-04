// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");
    float value = half(bill_amount, tax_percent, tip_percent);

    printf("You will owe $%.2f each!\n", value);
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float value = bill;
    value = value + (value * (tax / 100));
    value = value + (value * ((float) tip / 100));
    return (value / 2);
}
