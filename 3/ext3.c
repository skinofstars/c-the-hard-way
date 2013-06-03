#include <stdio.h>

int main(int argc, char *argv[])
{
    int age = 50;
    int height = 72;
    char name[] = "Boa"; // strings are array of chars

    printf("%s is %d years old\n", name, age);
    printf("He is %d feet tall\n", height);

    return 0;
}
