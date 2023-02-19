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
#include "sort_functions.c"

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
     t_stack *stack_a, *stack_b;
    // print(stack);
    // atexit(leaks);
    int size = ac - 1;
    if (size == 5)
    {
        stack_a = parse_args(size, av);
        stack_b = create_stack(size);
        // push(stack_b, stack_a->array[stack_a->top]);
        // push(stack_b, stack_a->array[stack_a->top - 1]);
        // print(stack_a);
        //push_from_to(stack_a, stack_b);
        //push_from_to(stack_a, stack_b);
        // while (stack_b->top--)
        // {
        //     printf("%d\n", stack_b->array[stack_b->top]);
        // }
        // printf("%d\n", stack_b->array[stack_b->top]);
        // print(stack_b);
        // printf("\n\n");
        // print(stack_a);
        pb(stack_a->array, &stack_a->top, stack_b->array, &stack_b->top);
        print(stack_b);
        printf("\n\n");
        print(stack_a);
    }

    // int a[] = {1,-2,3,4};
    // if (check_if_sorted(a, 4) == 0)
    //     printf("sorted");      
    return (0);
}

//+-5
//1555-
//""
//" "