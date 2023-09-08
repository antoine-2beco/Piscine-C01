/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:19:34 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/07 19:28:33 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

void    ft_putnbr(int   nb)
{
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	con1;
	int	con2;
	int temp;
	int temp2;
	int a;
	int b;

	con1 = 0;
	con2 = 0;

	while (con1 != (size - 1))
	{
		a = tab[con1];
		temp = a;
		while (con2 != (size))
		{
			b = tab[con2];
			if (temp > b)
			{
				temp = b;
				temp2 = con2;
			}
			con2++;
		}
		if (temp != a)
		{
			tab[con1] = temp;
			tab[temp2] = a;
		}
		con1++;
		con2 = con1;
	}
	ft_putnbr(tab[0]);
	write(1, "\n", 1);
    ft_putnbr(tab[1]);
	write(1, "\n", 1);
    ft_putnbr(tab[2]);
	write(1, "\n", 1);
    ft_putnbr(tab[3]);
	write(1, "\n", 1);
    ft_putnbr(tab[4]);
	write(1, "\n", 1);
    ft_putnbr(tab[5]);
}

int	main(void)
{
	int tab[6] = {514, 384, 5, -45, 0, 30825};
	int size;

	size = 6;
	ft_sort_int_tab(tab, size);
}
