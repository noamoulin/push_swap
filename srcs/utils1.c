/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:42:57 by nomoulin          #+#    #+#             */
/*   Updated: 2023/02/10 13:49:00 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

uint8_t	is_int32(char *str)
{
	int64_t	nbr;

	if (is_int(str))
	{
		nbr = atoi64(str);
		return ((nbr >= INT32_MIN && nbr <= INT32_MAX));
	}
	return (0);
}

int64_t	atoi64(char *str)
{
	int64_t	i;
	int64_t	nbr;
	uint8_t	sign;

	i = 0;
	nbr = 0;
	sign = 0;
	while (str[i] && is_ws(str[i]))
		i++;
	if (str[i] && str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && is_digit_(str[i]))
		nbr = (nbr * 10) + (str[i++] - '0');
	if (sign == 1)
		return (-nbr);
	return (nbr);
}

uint32_t	uabs32(int32_t n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int32_t	min32(int32_t a, int32_t b)
{
	if (a < b)
		return (a);
	return (b);
}

uint8_t	is_sorted(int32_t *array, uint64_t len)
{
	uint32_t	index;
	int32_t		previous_elm;
	int32_t		current_elm;

	previous_elm = INT32_MIN;
	current_elm = array[0];
	index = 0;
	while (index < len)
	{
		current_elm = array[index];
		if (current_elm < previous_elm)
			return (0);
		previous_elm = current_elm;
		index++;
	}
	return (1);
}
