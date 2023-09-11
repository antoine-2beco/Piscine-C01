/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:19:34 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/08 21:21:37 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// Segmentation Fault 11
void	ft_sort_int_tab(int *tab, int size)
{
	int	con1;
	int	con2;
	int	a;
	int	b;

	con1 = 0;
	con2 = 0;
	while (con1 != (size - 1))
	{
		while ((con2 != (size)) || (con1 != (size - 1)))
		{
			a = tab[con1];
			b = tab[con2];
			if (a > b)
			{
				tab[con1] = b;
				tab[con2] = a;
			}
			con2++;
		}
		con1++;
		con2 = con1;
	}
}
