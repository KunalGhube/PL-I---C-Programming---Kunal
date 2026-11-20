
#include <stdio.h>

int main()
{
    int num = 100;    // Declare and initialize an integer variable
    int *ptr;         // Declare an integer pointer

    ptr = &num;       // Initialize pointer with address of num

    // Display using normal variable
    printf("Using Normal Variable:\n");
    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", (void *)&num);

    // Display using pointer
    printf("\nUsing Pointer:\n");
    printf("Value of num = %d\n", *ptr);
    printf("Address of num = %p\n", (void *)ptr);

    return 0;
}
