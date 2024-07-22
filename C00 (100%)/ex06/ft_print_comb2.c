#include <unistd.h>

void ft_print_comb2(void)
{
    int a;
    int b;

    a = '0';
        while (a <= '9')
        {
            b = a + 1;
            while (b <= '9')
            {
                    write(1, &a, 1);
                    write(1, &b, 1);
                    if(a != '9' || b != '9')
                        {
                            write(1, ", ", 2);
                        }
                   
                      
                        
            b++;
            }   
        a++;
        }
}

int   main(void)
{
    ft_print_comb2();
    return (0);  
}