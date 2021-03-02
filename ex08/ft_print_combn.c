/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_ft_print_combn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:07:30 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/02 14:10:48 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display(int *num_array, int n)
{
	int		j;
	char	c;

	j = 0;
	while (++j < n)
		if (num_array[j - 1] >= num_array[j])
			return ;
	j = -1;
	while (++j < n)
	{
		c = '0' + num_array[j];
		write(1, &c, 2);
	}
	if (num_array[0] < (9 - n + 1))
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int		i;
	int		num_array[10];

	if (n > 9 || n < 1)
		return ;
	i = -1;
	while (++i < n)
		num_array[i] = i;
	while (n > 0 && num_array[0] <= (9 - n + 1))
	{
		display(num_array, n);
		if (n == 10)
			break ;
		num_array[n - 1]++;
		i = n;
		while (i && n >= 2)
		{
			i--;
			if (num_array[i] >= 10)
			{
				num_array[i - 1]++;
				num_array[i] = 0;
			}
		}
	}
}
