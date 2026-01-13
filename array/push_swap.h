/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:43:52 by jdelmott          #+#    #+#             */
/*   Updated: 2026/01/12 19:47:30 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>
# include <stdarg.h>
# include <sys/types.h>
# include <fcntl.h>

typedef struct  s_list{
	int	value;
	int	position;
} t_list;

//utils(libft)
int	ft_atoi(const char *nptr);
int	intcmp(int a, int b);
int	ft_isdigit(int c);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);

//fonctions de trie
void	sa(t_list *a);
void	sb(t_list *a);
void	ss(t_list *a, t_list *b);
int	strlen_list(t_list *list);
t_list	*push(t_list *rm, t_list *psh);
t_list  *push_back(t_list *a);
void	pb(t_list *a, t_list *b);
void	pa(t_list *a, t_list *b);
void	ra(t_list *a);
void	rb(t_list *a);
void	rr(t_list *a, t_list *b);
void	rra(t_list *a);
void	rrb(t_list *a);
void	rrr(t_list *a, t_list *b);

//algo
void algo_verif(int size, t_list *listA, t_list *listB);
void small_algo_verif(int size, t_list *listA, t_list *listB);
void	two(t_list *list);
void	three(t_list *a);
void	four(t_list *a, t_list *b, int i);
void	five(t_list *a, t_list *b);

//push swap visualiseur
//raditz (pas suffisant)

#endif
