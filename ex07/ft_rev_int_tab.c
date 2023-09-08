/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:28:23 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/08 10:03:43 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	n_tab[size];
	int	counter;

	counter = 0;
	while (size != 0)
	{
		n_tab[counter] = tab[size - 1];
		size--;
		counter++;
	}
	tab = n_tab;
}
