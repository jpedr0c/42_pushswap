/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocardos <jocardos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 05:23:38 by jocardos          #+#    #+#             */
/*   Updated: 2022/12/06 11:30:39 by jocardos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	quicksort_3(t_stacks *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		sort_three_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa_move(stack, EXEC);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1]
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa_move(stack, EXEC);
			else if (len == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				len = push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				sa_move(stack, EXEC);
			else if (len++)
				pa_move(stack, EXEC);
		}
	}
}

int	get_mediane(int *pivot, int *stack, int size)
{
	int	*tmp_stack;
	int	i;

	tmp_stack = (int *)malloc(size * sizeof(int));
	if (!tmp_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp_stack[i] = stack[i];
		i++;
	}
	sort_tmp(tmp_stack, size);
	*pivot = tmp_stack[size / 2];
	free(tmp_stack);
	return (1);
}

int	quicksort_a(t_stacks *stack, int len, int cnt)
{
	int	pivot;
	int	items;

	if (check_sorted(stack->a, len, 0) == 1)
		return (1);
	items = len;
	if (len <= 3)
	{
		quicksort_3(stack, len);
		return (1);
	}
	if (!cnt && !get_mediane(&pivot, stack->a, len))
		return (0);
	while (len != items / 2 + items % 2)
	{
		if (stack->a[0] < pivot && (len--))
			pb_move(stack, EXEC);
		else if (++cnt)
			ra_move(stack, EXEC);
	}
	while (items / 2 + items % 2 != stack->size_a && cnt--)
		rra_move(stack, EXEC);
	return (quicksort_a(stack, items / 2 + items % 2, 0) && quicksort_b(stack,
			items / 2, 0));
	return (1);
}

int	quicksort_b(t_stacks *stack, int len, int cnt)
{
	int	pivot;
	int	items;

	if (!cnt && check_sorted(stack->b, len, 1) == 1)
		while (len--)
			pa_move(stack, EXEC);
	if (len <= 3)
	{
		sort_small_b(stack, len);
		return (1);
	}
	items = len;
	if (!get_mediane(&pivot, stack->b, len))
		return (0);
	while (len != items / 2)
	{
		if (stack->b[0] >= pivot && len--)
			pa_move(stack, EXEC);
		else if (++cnt)
			rb_move(stack, EXEC);
	}
	while (items / 2 != stack->size_b && cnt--)
		rrb_move(stack, EXEC);
	return (quicksort_a(stack, items / 2 + items % 2, 0) && quicksort_b(stack,
			items / 2, 0));
}
