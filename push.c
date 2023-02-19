/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:37:58 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:37:58 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

static int is_full(t_stack *stack)
{
    if (stack->top == stack->capacity - 1)
        return (1);
    return (0);    
}

static int is_empty(t_stack *stack)
{
    if (stack->top == -1)
        return (1);
    return (0);    
}

void push(t_stack *stask, int nbr)
{
    if (is_full(stask) == 1)
        return ;
    stask->top++;    
    stask->array[stask->top] = nbr;
    // printf("element add\n");
}

void push_from_to(t_stack *from, t_stack *to)
{
    if (from->top == -1)
		return ;
	to->array[++to->top] = from->array[from->top--];
}