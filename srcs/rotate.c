/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nomoulin <nomoulin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 10:54:08 by nomoulin          #+#    #+#             */
/*   Updated: 2023/02/10 10:58:57 by nomoulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	rotate(int32_t *stack, uint32_t len)
{
	int32_t	tmp;

	tmp = stack[0];
	shift_up(stack, len);
	stack[len - 1] = tmp;
}

void	ra(t_push_swap *push_swap)
{
	rotate(push_swap->stack_a, push_swap->a_weight);
	dynappend_str(push_swap->instructions, "ra\n");
}

void	rb(t_push_swap *push_swap)
{
	rotate(push_swap->stack_b, push_swap->b_weight);
	dynappend_str(push_swap->instructions, "rb\n");
}

void	rr(t_push_swap *push_swap)
{
	rotate(push_swap->stack_a, push_swap->a_weight);
	rotate(push_swap->stack_b, push_swap->b_weight);
	dynappend_str(push_swap->instructions, "rr\n");
}
