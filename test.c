#include <stdio.h>

#define patternSize 8

void getInput(int inputArray[])
{
    for (int i = 0; i < patternSize; i++)
    {
        inputArray[i] = i + 1;
    }
}

int main()
{
    printf("Hello World!\n");

    int input[patternSize];
    for (int i = 0; i < patternSize; i++)
    {
        input[i] = 0;
    }

    getInput(input);

    for (int i = 0; i < patternSize; i++)
    {
        printf("%d, ", input[i]);
    }

    return 0;
}
