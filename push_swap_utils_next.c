/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_next.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 17:06:44 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 15:01:19 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*t;
	size_t			m;

	t = (unsigned char *)s;
	m = 0;
	while (m < n)
	{
		t[m] = '\0';
		m++;
	}
}

int	strlen_list(t_list *list)
{
	int	i;

	i = 0;
	while (list[i].exist == 1)
		i++;
	return (i);
}

long int	intcmp(long int a, long int b)
{
	if (b == -2147483648 || a == 2147483647)
		return (1);
	if (a == -2147483648 || b == 2147483647)
		return (-1);
	return (a - b);
}
