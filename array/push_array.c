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

t_list	*push(t_list *rm, t_list *psh)
{
	int	size;
	int	*array;

	size = strlen_list(psh);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	copy_list(psh, array);
	if (psh)
		free(psh);
	psh = malloc(sizeof(t_list) * (size + 1));
	if (!psh)
		return (NULL);
	psh[0].value = rm[0].value;
	psh[0].position = 1;
	copy_integer(array, psh, size);
	free(array);
	return (psh);
}

t_list	*push_back(t_list *rm)
{
	int	*array;
	int	size;
	int	i;

	i = 0;
	size = strlen_list(rm);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	copy_list(rm, array);
	free(rm);
	rm = ft_calloc(sizeof(t_list), size);
	if (!rm)
		return (NULL);
	while (i < size - 1)
	{
		rm[i].value = array[i + 1];
		rm[i].position = i + 1;
		i++;
	}
	free(array);
	return (rm);
}
