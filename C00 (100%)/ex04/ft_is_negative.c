#include <unistd.h>

void    ft_is_negative(int n)
{
    char    negatif;
    char    positif;

    negatif = 'N';
    positif = 'P';
       
    if(n < 0)
    {
        write(1, &negatif, 1);
    }else{
        write(1, &positif, 1);
     }
}
/*
int   main(void)
{
    ft_is_negative(4);
    return (0);  
}
*/