void ft_rev_int_tab(int *tab, int size)
{
    int swab;
    int l = 0;
    int r = size - 1;
     while(l != (size / 2))
        {
        swab = tab[l];
        tab[l] = tab[r];
        tab[r] = swab;
            r--;
            l++;
        }
}