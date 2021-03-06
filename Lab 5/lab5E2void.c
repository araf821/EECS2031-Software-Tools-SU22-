#include <stdio.h>

#define MAX_INPUT 22

void display(int *, int);
void largest(int *, int, int *);

int main(int argc, char *argv[])
{
    int array[MAX_INPUT], count, largestValue;

    /* Input MAX_INPUT values from the stdin keyboard. */
    int i;
    count = 0;

    while (scanf("%d", &i) != EOF)
    {
        /* store in array[count] without using [] */
        *(array + count) = i;
        count++;
    }

    /* Call function and display the return value. */
    printf("Inputs: ");
    display(array, count);
    /* Pass the variable largestValue as an address into the function. */
    largest(array, count, &largestValue);
    printf("\nLargest value: %d\n", largestValue);

    return 0;
}

/* displays the content of int array */
void display(int *arr, int length)
{
    int i;
    for (i = 0; i < length; i++)
        printf("%d ", *(arr + i));
}

/* This function returns the largest value */
/* in the int array */
void largest(int *arr, int length, int *largestValue)
{
    int i;
    /* Set the largest value as the start index of the array. */
    *(largestValue) = *(arr);
    for (i = 0; i < length; i++)
    {
        /* If the next index in the array is larger than
        the current largest, set it as the new largest. */
        if (*(arr + i) > *largestValue)
            *(largestValue) = *(arr + i);
    }
}
