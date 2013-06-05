#include <stdio.h>

/* my guess, argc indicates an argument count for argv.
    not sure how that would work, but... shurgs.
    pretty sure the asterisk on argv is a pointer  */
int main(int argc, char *argv[])
{
    int distance = 500;
    float power = 2.345f;
    double super_power = 5678.2345;
    char initial = 'J';
    char first_name[] = "Kevin"; // not sure why single quotes doesn't work
    char last_name[] = "Carmody";

    printf("I would walk %d miles\n", distance);
    printf("The number %f is a float\n", power);
    printf("Whereas %f is a double\n", super_power);
    printf("My name is %s %c. %s\n", first_name, initial, last_name);

    return 0;
}
