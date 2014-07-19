/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouault <mgouault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 16:51:04 by mgouault          #+#    #+#             */
/*   Updated: 2014/07/05 18:37:47 by mgouault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int x, int y)
{
	int		i;
	int		j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			if ((i == 1 || i == y) && j != 1 && j != x)
				ft_putchar('-');
			else if ((j == 1 || j == x) && i != 1 && i != y)
				ft_putchar('|');
			else if (i != 1 && i != y && j != 1 && j != x)
				ft_putchar(' ');
			else
				ft_putchar('o');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
