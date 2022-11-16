/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 04:17:15 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/15 04:17:15 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void ra_move(t_stacks *stack, int print)
{
  int tmp;
  int i;

  if (stack->size_a == 0 || stack->size_a == 1)
  {
    if (print == STACK)
      ft_printf("Very few numbers in Stack A. Try again!");
    return ;
  }
  i = 0;
  tmp = stack->a[i];
  i++;
  while (i < stack->size_a)
  {
    stack->a[i - 1] = stack->a[i];
    i++;
  }
  stack->a[i - 1] = tmp;
  if (print == OPT)
    ft_printf("ra\n");
}

void rb_move(t_stacks *stack, int print)
{
  int tmp;
  int i;

  if (stack->size_b == 0 || stack->size_b == 1)
  {
    if (print == STACK)
      ft_printf("Very few numbers in Stack B. Try again!");
    return ;
  }
  i = 0;
  tmp = stack->b[i];
  i++;
  while (i < stack->size_b)
  {
    stack->b[i - 1] = stack->b[i];
    i++;
  }
  stack->b[i - 1] = tmp;
  if (print == OPT)
    ft_printf("rb\n");
}

void rr_move(t_stacks *stack, int print)
{
  int tmp;
  int i;

  if (stack->size_a == 0 || stack->size_a == 1
      || stack->size_b == 0 || stack->size_b == 1)
  {
    if (print == STACK)
      ft_printf("Very few numbers in stacks. Try again!");
    return ;
  }
  i = 0;
  tmp = stack->a[i];
  while (++i < stack->size_a)
    stack->a[i - 1] = stack->a[i];
  stack->a[i - 1] = tmp;
  i = 0;
  tmp = stack->b[i];
  while (++i < stack->size_b)
    stack->b[i - 1] = stack->b[i];
  stack->b[i - 1] = tmp;
  if (print == OPT)
    ft_printf("rr\n");
}