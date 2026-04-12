#include <stdio.h>

int completeDistance(int a,int b) {
    return a + b;
}

int main() {
    int distanceA2B = 160;
    int distanceB2C = 40;

    printf("Total distance from A2C is: %d", completeDistance(distanceA2B, distanceB2C));

    // Speicher sparen (1 Byte statt 4 Bytes). Achtung vor Überlauf
    unsigned char a = 160;
    unsigned char b = 40;

    printf("Total distance from A2C is: %d", a + b);
    return 0;
}
