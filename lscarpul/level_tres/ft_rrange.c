#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int len = 0;
    int i = 0;
    int *range;

    if(start >= end)
        len = start - end + 1;
    if (end > start)
        len = end - start + 1;
    range = (int *)malloc(sizeof(int) * len);
    while(i < len)
    {
        range[i] =  end;
        if(start > end)
            end++;
        else if(end > start)
            end--;
        i++;
    }
    return (range);
}

int main(void)
{
    int *arr;
    int i;
    int start, end, len;

    // --- TEST 1: Crescente ---
    start = -1;
    end = 5;
    len = 7; // 5 - 1 + 1
    printf("Test 1 (Crescente da %d a %d):\n", start, end);
    arr = ft_range(start, end);
    if (arr)
    {
        for (i = 0; i < len; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr); // Liberiamo la memoria!
    }

    // --- TEST 2: Decrescente ---
    start = 5;
    end = 1;
    len = 5; // 5 - 1 + 1
    printf("\nTest 2 (Decrescente da %d a %d):\n", start, end);
    arr = ft_range(start, end);
    if (arr)
    {
        for (i = 0; i < len; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }

    // --- TEST 3: Stesso numero ---
    start = 42;
    end = 42;
    len = 1; // 42 - 42 + 1
    printf("\nTest 3 (Stesso numero %d a %d):\n", start, end);
    arr = ft_range(start, end);
    if (arr)
    {
        // Se c'è il bug su start == end, qui potrebbe non stampare nulla
        for (i = 0; i < len; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }

    return (0);
}