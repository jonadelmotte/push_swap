/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 16:26:37 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:17:12 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	strlen_list(t_list *list)
{
	int	i;

	i = 0;
	while (list[i].position)
		i++;
	return (i);
}

static void	copy_list(t_list *src, int *copy)
{
	int	i;

	i = 0;
	while (src[i].position)
	{
		copy[i] = src[i].value;
		i++;
	}
}

static void	copy_integer(int *src, t_list *copy, int size)
{
	int	i;

	i = 0;
	if (!copy[i].position)
		copy[i].position = 1;
	while (i < size)
	{
		copy[i + 1].value = src[i];
		copy[i + 1].position = copy[i].position + 1; // ou i + 2
		i++;
	}
}

t_list	*fre_a(t_list *a)
{
	int	*temp;
	int	size;
	int	i;

	i = 0;
	size = strlen_list(a);
	temp = malloc(sizeof(int) * size);
	if (!temp)
		return (NULL);
	copy_list(a, temp);
	free(a);
	a = malloc(sizeof(t_list) * (size - 1));
	if (!a)
		return (NULL);
	while (i < size - 1)
	{
		a[i].value = temp[i + 1];
		a[i].position = i + 1;
//		printf("value1 = %i, position1 = %i\n", a[i].value, a[i].position);
		i++;
	}
	free(temp);
	return (a);
}

t_list	*pb_b(t_list *a, t_list *b)
{
	int	*temp;
	int	size;

	size = strlen_list(b);
	temp = malloc(sizeof(int) * size);
	if (!temp)
		return (NULL);
	copy_list(b, temp);
	free(b);
	b = malloc(sizeof(t_list) * (size + 1));
	if (!b)
		return (NULL);
	b[0].value = a[0].value;
	b[0].position = 1;
	copy_integer(temp, b, size);
	free(temp);
//	a = free_a(a);
/*	int	i = 0;
	while (a[i].position)
	{
		printf("value1 = %i, position1 = %i\n", a[i].value, a[i].position);
		i++;
	}*/
	return (b);
}
