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

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b
}			t_stacks;

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
int			main(int argc, char **argv);

#endif