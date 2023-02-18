/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:29:19 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:29:19 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *create_stack(unsigned capacity)
{
    t_stack *stack;
    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (0);
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = malloc(sizeof(int) * stack->capacity);
    if (!stack->array)
        return (0);
    return (stack);
}