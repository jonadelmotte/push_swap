/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_next.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 10:00:40 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/22 16:21:15 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parsing_single(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (!(ft_isdigit(argv[i]) || argv[i] == ' ' || argv[i] == '-'
				|| argv[i] == '+'))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		if ((argv[i] == '-' && !ft_isdigit(argv[i + 1])) || (argv[i] == '+'
				&& !ft_isdigit(argv[i + 1])))
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	parsing_verif(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 2)
		parsing_single(argv[1]);
	else if (argc > 2)
	{
		while (argv[i])
		{
			parsing_single(argv[i]);
			i++;
		}
	}
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

void	limits(t_list *a, char *data)
{
	long int	num;

	num = ft_atoi(data);
	if (num > 2147483647 || num < -2147483648)
	{
		free(a);
		write(1, "Error\n", 6);
		exit(1);
	}
}

void	limits_split(char *split[], int size)
{
	long int	num;
	int			i;

	i = 0;
	while (i < size)
	{
		num = ft_atoi(split[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			i = size;
			while (i >= 0)
				free(split[i--]);
			free(split);
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}
