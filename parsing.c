/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:00:11 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 11:27:36 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// INT_MIN / INT_MAX
t_list	*parsing(int argc, char *argv[])
{
	parsing_verif(argc, argv);
	if (argc > 2)
		return (init_list(argc, argv));
	return (init_split(ft_split(argv[1], ' '), (count_words(argv[1], ' ')
				+ 1)));
}

t_list	*init_list(int size, char *data[])
{
	int		i;
	t_list	*list;

	i = 0;
	list = malloc(sizeof(t_list) * (size));
	if (!list)
		return (NULL);
	while (i < size - 1)
	{
		limits(list, data[i + 1]);
		list[i].value = (int)ft_atoi(data[i + 1]);
		list[i].position = i + 1;
		list[i].exist = 1;
		i++;
	}
	list[i].exist = 0;
	list[i].value = 0;
	list[i].position = 0;
	list[i].size = 0;
	number_repeat(list);
	return (list);
}

t_list	*init_split(char *split[], int size)
{
	int		i;
	t_list	*list;

	i = 0;
	limits_split(split, size);
	list = malloc(sizeof(t_list) * (size + 1));
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i].value = (int)ft_atoi(split[i]);
		list[i].position = i + 1;
		list[i].exist = 1;
		i++;
	}
	list[i].exist = 0;
	list[i].value = 0;
	list[i].position = 0;
	list[i].size = 0;
	while (i >= 0)
		free(split[i--]);
	free(split);
	number_repeat(list);
	return (list);
}
