/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sduprey <sduprey@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/16 06:53:45 by sduprey           #+#    #+#             */
/*   Updated: 2014/07/16 09:29:54 by sduprey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_char_to_escape(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int		index;
	int		is_negative;
	int		value;

	is_negative = 0;
	value = 0;
	index = 0;
	while (is_char_to_escape(str[index]))
		index++;
	if (str[index] == '+')
		index++;
	else if (str[index] == '-')
	{
		is_negative = 1;
		index++;
	}
	while (is_number(str[index]))
	{
		value = (value * 10) - (str[index] - '0');
		index++;
	}
	if (!is_negative)
		value *= -1;
	return (value);
}
