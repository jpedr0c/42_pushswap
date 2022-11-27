/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 06:32:56 by jocardos          #+#    #+#             */
/*   Updated: 2022/11/16 06:32:56 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void push_swap(char **argv)
{
  t_stacks stack;
  int size;
  int i;

  i = -1;
  size = ps_strlen(argv);
  stack.a = malloc(size * sizeof(int));
  if (!stack.a)
    return ;
  stack.size_a = size;
  stack.b = malloc(size * sizeof(int));
  if (!stack.b)
  {
    free(stack.a);
    return;
  }
  stack.size_b = 0;
  while (++i < size)
    stack.a[i] = ps_atoi(argv[i], stack.a);
  check_repeat(stack.a, size);
  sort(&stack, size);
  free(stack.a);
  free(stack.b);
}

void    test(int argc, t_stack *stack)
{
    int    i;

    i = 0;
    ft_printf("[");
    while (i < argc - 1)
    {
        ft_printf("%i", stack->aux_array[i]);
        if (i < argc - 2)
            ft_printf(", ");
        i++;
    }
    ft_printf("] | index = %d", stack->index);
    ft_printf(" | topo = %d\n", stack->aux_array[stack->index]);
}

int main (int argc, char **argv)
{
  if (argc > 1)
  {
    argv++;
    if (argc == 2)
      argv = ft_split(*argv, ' ');
    push_swap(argv);
    ft_printf("STACK A:");
    test(argc, stack->a);
    ft_printf("\n");
    ft_printf("STACK B:");
    test(argc, stack->b);
    ft_printf("\n");
    return (0);
  }
  return (0);
}
