/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:28:23 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/08 21:05:24 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i_size;
	int	temp;

	temp = 0;
	i_size = size;
	while (size != (i_size / 2))
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[i_size - size];
		tab[i_size - size] = temp;
		size--;
	}
}
