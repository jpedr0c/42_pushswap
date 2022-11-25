/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortage.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 04:04:13 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/16 04:04:13 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void sort_tmp(int *tmp_stack, int size)
{
  int i;
  int j;
  int tmp;

  i = 0;
  while (i < size)
  {
    j = i + 1;
    while (j < size)
    {
      if (tmp_stack[i] > tmp_stack[j])
      {
        tmp = tmp_stack[i];
        tmp_stack[i] = tmp_stack[j];
        tmp_stack[j] = tmp;
      }
      j++;
    }
    i++;
  }
}

void sort_three_a(t_stacks *s)
{
  if (s->a[0] > s->a[1] && s->a[0] < s->a[2] && s->a[1] < s->a[2])
    sa_move(s, EXEC);
  if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
  {
    sa_move(s, EXEC);
    rra_move(s, EXEC);
  }
  if (s->a[0] > s->a[1] && s->a[0] > s->a[2] && s->a[1] < s->a[2])
    ra_move(s, EXEC);
  if (s->a[0] < s->a[1] && s->a[0] < s->a[2] && s->a[1] > s->a[2])
  {
    sa_move(s, EXEC);
    ra_move(s, EXEC);
  }
  if (s->a[0] < s->a[1] && s->a[0] > s->a[2] && s->a[1] > s->a[2])
    rra_move(s, EXEC);  
}

int sort_small_b(t_stacks *stack, int len)
{
  if (len == 1)
    pa_move(stack, EXEC);
  else if (len == 2)
  {
    if (stack->b[0] < stack->b[1])
      sb_move(stack, EXEC);
    while (len--)
      pa_move(stack, EXEC);
  }
  else if (len == 3)
  {
    while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
    {
      if (len == 1 && stack->a[0] > stack->a[1])
        sa_move(stack, EXEC);
      else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
             || (len == 3 && stack->b[0] > stack->b[2]))
        len = push(stack, len, 1);
      else
        sb_move(stack, EXEC);
    }
  }
  return (0);
}

int sort(t_stacks *stack, int size)
{
  if (check_sorted(stack->a, stack->size_a, 0) == 0)
  {
    if (size == 2)
      sa_move(stack, EXEC);
    else if (size == 3)
      sort_three_a(stack);
    else
      quicksort_a(stack, size, 0);
  }
  return (0);
}

int push(t_stacks *stack, int len, int operation)
{
  if (operation == 0)
    pb_move(stack, EXEC);
  else
    pa_move(stack, EXEC);
  len--;
  return (len);
}