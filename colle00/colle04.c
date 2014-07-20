/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agagnier <agagnier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/05 09:27:42 by agagnier          #+#    #+#             */
/*   Updated: 2014/07/05 14:08:01 by agagnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int x, int y)
{
	int a;
	int b;

	a = 0;
	while (a++ < y)
	{
		b = 0;
		while (b++ < x)
		{
			if ((a == 1) && (b == 1))
				ft_putchar('A');
			else if ((a == 1) && (b == x))
				ft_putchar('C');
			else if ((a == y) && (b == 1))
				ft_putchar('C');
			else if ((a == y) && (b == x))
				ft_putchar('A');
			else if ((a == 1) || (a == y) || (b == 1) || (b == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
