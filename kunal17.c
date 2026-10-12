#include <stdio.h>

int main()
{
    int var1[5];
    float var2[5];
    char var3[5];

    // Integer array
    var1[0] = 10;
    var1[1] = 20;
    var1[2] = 30;
    var1[3] = 40;
    var1[4] = 50;

    printf("INTEGER ARRAY:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Value of var1[%d] is %d and address is %p\n",
               i, var1[i], (void *)&var1[i]);
    }

    // Float array
    var2[0] = 1.1f;
    var2[1] = 2.2f;
    var2[2] = 3.3f;
    var2[3] = 4.4f;
    var2[4] = 5.5f;

    printf("\nFLOAT ARRAY:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Value of var2[%d] is %.2f and address is %p\n",
               i, var2[i], (void *)&var2[i]);
    }

    // Character array
    var3[0] = 'A';
    var3[1] = 'B';
    var3[2] = 'C';
    var3[3] = 'D';
    var3[4] = 'E';

    printf("\nCHARACTER ARRAY:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Value of var3[%d] is %c and address is %p\n",
               i, var3[i], (void *)&var3[i]);
    }

    return 0;
}
