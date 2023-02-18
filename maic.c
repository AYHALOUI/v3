/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maic.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:37:37 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:37:37 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "parse_args.c"

void print_info(int *tab, unsigned int len)
{
   int i;

   i = 0;
   while (i < len - 1)
   {
    printf("%d\n", tab[i]);
    i++;
   }
}

void print(t_stack *stack)
{
    print_info(stack->array, stack->capacity);
}

void    leaks(void)
{
    system("leaks a.out");
}

int main(int ac, char **av)
{
    t_stack *stack = parse_args(ac, av);
    //print(stack);
    //atexit(leaks);
    return (0);
}

//+-5
//1555-
//""
//" "