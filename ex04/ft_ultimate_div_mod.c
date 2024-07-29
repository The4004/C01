void ft_ultimate_div_mod(int *a, int *b)
{ 
    int divides,division;
    
    divides = *a / *b;
    division = *a % *b;
    
    *a = divides;
    *b = division;

}