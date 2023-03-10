/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:54:08 by nomoulin          #+#    #+#             */
/*   Updated: 2023/02/10 10:58:57 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	invalid_entry_error(void)
{
	write(2, "Error\n",
		sizeof("Error\n"));
	exit(0);
}

void	allocation_error(void)
{
	write(2, "Error\n",
		sizeof("Error\n"));
	exit(1);
}
