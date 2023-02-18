/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:37:52 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:37:52 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PUSH_SWAP_h
#define PUSH_SWAP_h

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>


typedef struct s_stack {
    unsigned int top;
    unsigned int capacity;
    int *array;
}t_stack;

t_stack *create_stack(unsigned capacity);
void push_from_to(t_stack *from, t_stack *to);
void push(t_stack *stack, int nbr);
t_stack *parse_args(int ac, char **av);

void	rotate(t_stack *stack);
void	reverse_rotate(t_stack *stack);

void	swap(t_stack *stack);

// min
int min_help(int *tab, int len);
int find_min(t_stack *stack);

//max
int max_help(int *tab, int len);
int find_max(t_stack *stack);

#endif