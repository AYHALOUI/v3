/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:38:06 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:38:06 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	unsigned int	i;
	int	tmp;

	i = -1;
	tmp = stack->array[0];
	while (++i < stack->top)
		stack->array[i] = stack->array[i + 1];
	stack->array[stack->top] = tmp;
}