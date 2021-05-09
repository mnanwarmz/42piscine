/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:42:19 by azaid             #+#    #+#             */
/*   Updated: 2021/04/07 16:56:08 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int key;
	int j;

	i = 1;
	while (i < size)
	{
		key = tab[i];
		j = i - 1;
		i++;
		while (j >= 0 && tab[j] > key)
		{
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1] = key;
	}
}
