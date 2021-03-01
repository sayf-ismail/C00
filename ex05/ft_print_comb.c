/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 23:36:29 by stun-ism          #+#    #+#             */
/*   Updated: 2021/02/26 08:07:55 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	select_nums(int a, int b, int c)
{
	char d;
	char e;
	char f;
	char comma;
	char space;

	comma = ',';
	space = ' ';
	if (b > a && c > b)
	{
		d = ('0' + a);
		write(1, &d, 1);
		e = ('0' + b);
		write(1, &e, 1);
		f = ('0' + c);
		write(1, &f, 1);
		if (!(d == '7' && e == '8' && f == '9'))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				select_nums(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
