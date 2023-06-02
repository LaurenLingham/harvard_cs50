#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");
    int age = get_int("What's your age? ");
    string phone_number = get_string("What's your phone number? ");

    printf("Age if %i.  Name is %s.  Phone number is %s.", age, name, phone_number);
}
