#include <stdio.h>

int main()
{
    long long myLongHistory = 900;

    char size = sizeof(myLongHistory);

    printf("Size of char data type = %lu\n", sizeof(char));
    printf("Size of short data type = %lu\n", sizeof(short));
    printf("Size of int data type = %lu\n", sizeof(int));
    printf("Size of long data type = %lu\n", sizeof(long));
    printf("Size of long long data type = %lu\n", size);

    return 0;
}