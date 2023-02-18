/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaloui <ahaloui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:38:43 by ahaloui           #+#    #+#             */
/*   Updated: 2023/02/18 17:38:43 by ahaloui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int ft_isdigit(char c)
{
    return (c >= 0 && c <= 9);   
}

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);    
}

char	*ft_strjoin(char *s1, char 	*s2)
{
	char		*str;
	size_t		len;
	int			i;
	int			j;

	str = NULL;
	if (!s1 || !s2)
		return (str);
	else
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str != NULL)
		{
			i = -1;
			while (s1[++i])
				str[i] = s1[i];
			j = -1;
			while (s2[++j])
				str[i++] = s2[j];
			str[i] = '\0';
		}
	}
	return (str);
}