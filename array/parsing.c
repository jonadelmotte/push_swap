/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:00:11 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/14 19:14:07 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parsing_single(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i]) || argv[i] == ' '
				|| argv[i] == '-' || argv[i] == '+'))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		if (argv[i] == '-' || argv[i] == '+')
		{
			while (argv[i] == '-' || argv[i] == '+')
			{
				if (ft_isdigit(argv[i]))
					break ;
				i++;
			}
			if (!(ft_isdigit(argv[i])))
			{
				write(1, "Error\n", 6);
				exit(1);
			}
		}
		i++;
	}
}
static void	parsing_verif(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 2)
	{
		parsing_single(argv[1]);
	}
	else if (argc > 2)
	{
		while (argv[i])
		{
			parsing_single(argv[i]);// a reverifier (1 2 3 "4 6 8 2")
			i++;
		}
	}
}

t_list	*parsing(int argc, char *argv[])
{
	parsing_verif(argc, argv);
	if (argc > 2)
		return (init_list(argc, argv));
	else
		return (init_split(ft_split(argv[1], ' '), argv[1]));
}

t_list	*init_list(int size, char *data[])
{
	int		i;
	t_list	*list;

	i = 1;
	list = malloc(sizeof(t_list) * (size - 1));
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i - 1].value = ft_atoi(data[i]);
		list[i - 1].position = i;
		i++;
	}
	number_repeat(list);
	return (list);
}

t_list	*init_split(char *split[], char *data)
{
	int		i;
	int		size;
	t_list	*list;

	i = 0;
	size = count_words(data, ' ') + 1;
	list = malloc(sizeof(t_list) * (size));
	if (!list)
		return (NULL);
	while (i < size)
	{
		list[i].value = ft_atoi(split[i]);
		list[i].position = i + 1;
		i++;
	}
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
	number_repeat(list);
	return (list);
}

void	number_repeat(t_list *a)
{
	int	i;
	int	j;

	i = 0;
	while (a[i].position)
	{
		j = i + 1;
		while (a[j].position)
		{
			if (a[i].value == a[j].value)
			{
				free(a);
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
}
