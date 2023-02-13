/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:46:34 by nomoulin          #+#    #+#             */
/*   Updated: 2023/02/10 14:29:57 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static uint32_t	a_set_cost(uint32_t index, t_push_swap *push_swap)
{
	uint32_t	r_cost;
	uint32_t	rr_cost;

	r_cost = index;
	rr_cost = push_swap->a_weight - index;
	return (min32(r_cost, rr_cost));
}

static uint32_t	b_set_cost(uint32_t index, t_push_swap *push_swap)
{
	uint32_t	r_cost;
	uint32_t	rr_cost;

	r_cost = index;
	rr_cost = push_swap->b_weight - index;
	return (min32(r_cost, rr_cost));
}

uint32_t	cost_of(uint32_t index, t_push_swap *push_swap)
{
	return (a_set_cost(index, push_swap) + b_set_cost(push_swap->stack_a[index], push_swap));
}