#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
    int swab;
    int i;
    int j;
    int l = size - 1;
    if (size <= 1)
        return;
    i = 0;
    while(i < l)
    {
        j = 0;
        while(j < l - i)
        {

            if (tab[j] > tab[j + 1])
            {
                swab = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = swab;
            }
        j++;
        }
    i++;
    } 
}