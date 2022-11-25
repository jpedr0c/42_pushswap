/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 03:33:17 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/15 03:33:17 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void pa_move(t_stacks *stack, int print)
{
  int i;

  if (stack->size_b)
  {
    stack->size_a++;
    i = stack->size_a;
    while (--i > 0)
      stack->a[i] = stack->a[i - 1];
    stack->a[0] = stack->b[0];
    i = -1;
    stack->size_b--;
    while (++i < stack->size_b)
      stack->b[i] = stack->b[i + 1];
    if (print == EXEC)
      ft_printf("pa\n");
  }
  else
  {
    if (print == ERR)
      ft_printf("Stack B is empty. Try again!\n");
    return ;
  }
}

void pb_move(t_stacks *stack, int print)
{
  int i;

  if (stack->size_a)
  {
    stack->size_b++;
    i = stack->size_b;
    while (--i > 0)
      stack->b[i] = stack->b[i - 1];
    stack->b[0] = stack->a[0];
    i = -1;
    stack->size_a--;
    while (++i < stack->size_a)
      stack->a[i] = stack->a[i + 1];
    if (print == EXEC)
      ft_printf("pb\n");
  }
  else
  {
    if (print == ERR)
      ft_printf("Stack A is empty. Try again!\n");
    return ;
  }
}