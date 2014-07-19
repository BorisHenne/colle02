/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhenne <bhenne@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/19 20:06:08 by bhenne            #+#    #+#             */
/*   Updated: 2014/07/19 20:20:30 by bhenne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void top_line(int x)
{
	int			i;

	i = 0;
	{
		ft_putchar('/');
		while ((i < (x - 1) && x > 2))
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
			ft_putchar('\\');
		ft_putchar('\n');
	}
}

void bottom_line(int x)
{
	int			i;

	i = 0;
	{
		ft_putchar('\\');
		while ((i < (x - 1) && x > 2))
		{
			ft_putchar('*');
			i++;
		}
		if (x > 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}

void fill_line(int x, int y)
{
	int			i;
	int			j;

	j = 1;
	i = 0;
	while (j < (y - 1))
	{
		ft_putchar('*');
		while (i < x - 1)
		{
			ft_putchar(' ');
			i++;
		}
		i = 0;
		if (x > 1)
			ft_putchar('*');
		ft_putchar('\n');
		j++;
	}
}

void colle(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top_line(x);
		if (y > 2)
			fill_line(x, y);
		if (y != 1)
			bottom_line(x);
	}
}
