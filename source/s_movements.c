/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_movements.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:08:18 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/14 17:08:18 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sa_move(t_stacks *stack, int print)
{
  int tmp;

  if (stack->size_a == 0 || stack->size_a == 1)
  {
    if (print == ERR)
      ft_printf("Very few numbers in Stack A. Try again!\n");
    return ;
  }
  tmp = 0;
  tmp = stack->a[0];
  stack->a[0] = stack->a[1];
  stack->a[1] = tmp;
  if (print == EXEC)
    ft_printf("sa\n");
}

void sb_move(t_stacks *stack, int print)
{
  int tmp;

  if (stack->size_b == 0 || stack->size_b == 1)
  {
    if (print == ERR)
      ft_printf("Very few numbers in Stack A. Try again!\n");
    return ;
  }
  tmp = 0;
  tmp = stack->b[0];
  stack->b[0] = stack->b[1];
  stack->b[1] = tmp;
  if (print == EXEC)
    ft_printf("sb\n");
}

void ss_move(t_stacks *stack, int print)
{
  int tmp;

  if (stack->size_a == 0 || stack->size_a == 1 || (stack->size_b == 0 || stack->size_b == 1))
  {
    if (print == ERR)
      ft_printf("Very few numbers in Stack A. Try again!\n");
    return ;
  }
  tmp = 0;
  tmp = stack->a[0];
  stack->a[0] = stack->a[1];
  stack->a[1] = tmp;
  tmp = stack->b[0];
  stack->b[0] = stack->b[1];
  stack->b[1] = tmp;
  if (print == EXEC)
    ft_printf("ss\n");
}
