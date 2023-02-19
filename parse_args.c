/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:37:45 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:37:45 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "utils1.c"
#include "utils.c"
#include "utils2.c"
#include "create_stack.c"
#include "push.c"

// int *parse_args(int ac, char **av)
// {
//     int *tab;
//     int len;

//     if (ac < 2)
//     {
//         fprintf(stderr, "Usage: %s <n1> <n2> ... <nk>\n", av[0]);
//         exit(EXIT_FAILURE);
//     }
//     else
//     {
//         len = ac - 1;
//         tab = malloc(sizeof(int) * len);
//         if (!tab)
//             return (NULL);
//         int i = 0;
//     }
//     return (tab);
// }

// from here



void quit()
{
    ft_putstr("error\n");
    exit(0);
}

int check_if_duplicate(int *tab, int len)
{
	int i = 0;
	int j = 0;
	while (i < len) 
	{    
		j = i + 1;
        while (j < len) 
		{    
            if(tab[i] == tab[j])    
                return (1);
				j++;		    
        }
		i++;
    }
	return (0);
}

int check_string(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (ft_isalpha(str[i]))
            return (1);
        i++;
    }
    return (0);    
}

int	check_if_sorted(int *t, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j <= size)
		{
			if (t[i] < t[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	int	i;

	i = -1;
	while (++i < stack->top)
	{
		if (stack->array[i + 1] > stack->array[i])
			return (0);
	}
	return (1);
}



t_stack *parse_args(int ac, char **av)
{
    char **split;
    char *str;
    int i;
    int j;
    t_stack *stack_a;
    int size;

    if (ac == 1)
        quit();
    str = "";
    i = 1;
    j = 0;
    while (av[i])
    {
        str = ft_strjoin(str, av[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    if (check_string(str) == 1)
        quit();
    else
    {
        size = count_words_me(str, ' ');
        split = ft_split(str, ' ');
        stack_a = create_stack(size);
        // add nbrs to stack 
        while (split[j])
        {
            long long nbr = ft_atoi(split[j]);
            // printf("%lld\n", nbr);
            if ((nbr > 2147483647) || (nbr < -2147483648))
                quit();   
            push(stack_a, nbr);
            j++;
        }
        //print_info(stack_a->array, stack_a->capacity - 1);
        if (check_if_duplicate(stack_a->array, stack_a->capacity))
            quit();
    }
    return (stack_a);
}