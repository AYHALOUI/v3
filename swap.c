/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:38:26 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:38:26 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	swap(t_stack *stack)
{
	int	aux;

	if (stack->top <= 0)
		return ;
	aux = stack->array[stack->top];
	stack->array[stack->top] = stack->array[stack->top - 1];
	stack->array[stack->top - 1] = aux;
}