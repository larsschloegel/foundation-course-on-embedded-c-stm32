#include <stdio.h>

/* this is a function prototype of function myFun1 */
void myFun1(void);

int main()
{
    int myScore;

    myScore = 900;

    printf("Value of the variable myScore = %\n", myScore);

    myFun1();
    return 0;
}

void myFun1(void)
{
    myScore = 800;
    printf("002`Value of the variable myScore = %\n", myScore);
}