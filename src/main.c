#include <stdio.h>

void main() {
    char s[] = "a11472o5t6"; 
    //printf("%s\n", s);

    int i;
    int zeroCount = 0, oneCount = 0, twoCount = 0, threeCount = 0; 
    int fourCount = 0, fiveCount = 0, sixCount = 0, sevenCount = 0; 
    int eightCount = 0, nineCount = 0;
    for (i = 0; s[i] != '\0'; i++) {
        //printf("%c\n", s[i]);
        if (s[i] == '0') { zeroCount++; }
        if (s[i] == '1') { oneCount++; }
        if (s[i] == '2') { twoCount++; }
        if (s[i] == '3') { threeCount++; }
        if (s[i] == '4') { fourCount++; }
        if (s[i] == '5') { fiveCount++; }
        if (s[i] == '6') { sixCount++; }
        if (s[i] == '7') { sevenCount++; }
        if (s[i] == '8') { eightCount++; }
        if (s[i] == '9') { nineCount++; }
    }

    printf("%d %d %d %d %d %d %d %d %d %d", 
    zeroCount, oneCount, twoCount, threeCount, fourCount,
    fiveCount, sixCount, sevenCount, eightCount, nineCount);
}