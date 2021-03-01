/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:06:45 by stun-ism          #+#    #+#             */
/*   Updated: 2021/02/26 13:41:33 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_nums(int outer_num, int inner_num, char space)
{
	char	outer_str_tens;
	char	outer_str_units;
	char	inner_str_tens;
	char	inner_str_units;
	char	comma;

	comma = ',';
	if (inner_num > outer_num)
	{
		inner_str_tens = '0' + inner_num / 10;
		inner_str_units = '0' + (inner_num % 10);
		outer_str_tens = '0' + outer_num / 10;
		outer_str_units = '0' + (outer_num % 10);
		write(1, &outer_str_tens, 1);
		write(1, &outer_str_units, 1);
		write(1, &space, 1);
		write(1, &inner_str_tens, 1);
		write(1, &inner_str_units, 1);
		if (!(inner_num == 99 && outer_num == 98))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	int		outer_counter;
	int		inner_counter;
	char	space;

	outer_counter = 0;
	space = ' ';
	while (outer_counter < 100)
	{
		inner_counter = 0;
		while (inner_counter < 100)
		{
			display_nums(outer_counter, inner_counter, space);
			inner_counter++;
		}
		outer_counter++;
	}
}
