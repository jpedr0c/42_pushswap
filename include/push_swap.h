/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:30:02 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/15 04:30:02 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"
# include "../libft/include/ft_printf.h"
# include "../libft/include/get_next_line.h"
# include <limits.h>
# include <stdlib.h>

# define ERR 0
# define EXEC 1

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
}			t_stacks;

//UTILS
void error(int *stack);
int ps_atoi(char *str, int *stack);
int ps_strlen(char **argv);
int check_sorted(int *stack, int size, int order);
void check_repeat(int *stack, int size);

// MOVEMENTS
void sa_move(t_stacks *stack, int print);
void sb_move(t_stacks *stack, int print);
void ss_move(t_stacks *stack, int print);
void pa_move(t_stacks *stack, int print);
void pb_move(t_stacks *stack, int print);
void ra_move(t_stacks *stack, int print);
void rb_move(t_stacks *stack, int print);
void rr_move(t_stacks *stack, int print);
void rra_move(t_stacks *stack, int print);
void rrb_move(t_stacks *stack, int print);
void rrr_move(t_stacks *stack, int print);

//SORTAGE
void sort_tmp(int *tmp_stack, int size);
void sort_three_a(t_stacks *s);
int sort_small_b(t_stacks *s, int len);
int sort(t_stacks *stack, int size);
int push(t_stacks *stack, int len, int operation);

//QUICKSORT
void quicksort_3(t_stacks *stack, int len);
int get_mediane(int *pivot, int *stack, int size);
int quicksort_a(t_stacks *stack, int len, int cnt);
int quicksort_b(t_stacks *stack, int len, int cnt);

//PUSH_SWAP
void push_swap(char **argv);

#endif