#include "push_swap.h"


// this work

int min_help(int *tab, int len)
{
    int result;
    int i;

    i = 0;
    result = tab[i];
    while (i < len)
    {
        if (result > tab[i])
            result = tab[i];
        i++;    
    }
    return (result);
}

int find_min(t_stack *stack)
{
    int min;
    min = min_help(stack->array, stack->capacity);
    return (min);
}