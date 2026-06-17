#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    while(i < size)
    {
        j = i;
        while(j < size)
        {   
            if(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;

            }
            j++;
        }
        i++;
    }
    i = 0;
    while(tab[i])
    {
        printf("%d", tab[i]);
        i++;
    }
}

int main()
{
    int a[] = {2, 3, 5, 1};
    unsigned int b = 4;
    sort_int_tab(a, b);
}