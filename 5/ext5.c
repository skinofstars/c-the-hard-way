#include <stdio.h>

/* my guess, argc indicates an argument count for argv.
    not sure how that would work, but... shurgs.
    pretty sure the asterisk on argv is a pointer  */
int main(int argc, char *argv[])
{
    int distance = 500;

    printf("I would walk %d miles\n", distance);

    return 0;
}
