#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;

    nb = n;
    if (nb < 0)
    {
        nb *= -1;
        ft_putchar_fd('-', fd);
    }
    if (nb >= 10)
      ft_putnbr_fd(nb / 10, fd);
    ft_putchar_fd(nb % 10 + '0', fd);
}
// #include <limits.h>

// int main(void)
// {
//     ft_putnbr_fd(INT_MIN, 1);
//     write (1, "\n", 1);
//     ft_putnbr_fd(INT_MAX, 1);
//     write (1, "\n", 1);
//     ft_putnbr_fd(42, 1);
//     write (1, "\n", 1);
//     return 0;
// }