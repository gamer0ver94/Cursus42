/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:06 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/21 17:39:30 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	max_number(t_list **stack_a)
{
	t_list	*tmp;
	int		max;

	max = 0;
	tmp = *stack_a;

	while (tmp)
	{
		if (*(int *)tmp->content > max)
		{
			max = *(int *)tmp->content;
		}
		tmp = tmp->next;
	}
	return (max);
}

int	max_digit(int max_n)
{
	char	*n;
	int		i;

	i = 0;
	n = ft_itoa(max_n);
	while (n[i])
	{
		i++;
	}
	return (i);
}

//suplmentair functions for smart rotations

int	find_digit(t_list **stack, char c, int i)
{
	char	*n;
	t_list	*tmp;
	int		index;
	
	tmp = *stack;
	while (tmp)
	{
		n = ft_itoa(*(int *)tmp->content);
		index = ft_strlen(n) - 1 - i;
		if (n[index] && n[index] == c)
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

int	smarter_rotate(t_list **stack, char c, int i)
{
	char	*n;
	t_list	*tmp;
	int		index;
	int		r;
	int		size;

	r = 0;
	size = ft_lstsize(*stack);
	tmp = *stack;
	while (tmp)
	{
		n = ft_itoa(*(int *)tmp->content);
		index = ft_strlen(n) - 1 - i;
		if (n[index] == c)
		{
			if (r >= size / 2)
				return (1);//it means rra
			else
				return (0);//it means ra
		}
		tmp = tmp->next;
		r++;
	}
	return (-1);
}

int	check_index(t_list **stack, int i)
{
	t_list *tmp;
	char	*n;
	int index;
	
	tmp = *stack;
	while(tmp)
	{
		n = ft_itoa(*(int *)tmp->content);
		index = ft_strlen(n) - 1 - i;
		if (!n[index])
		{
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}

void	sort_big_num(t_list **stack_a, t_list **stack_b)
{
	int		max_n;
	int		max_d;
	char	j;
	int		i;
	char	*x;

	i = 0;
	j = '0';
	max_n = max_number(stack_a);
	max_d = max_digit(max_n);
	while (i < max_d && sort_verification(stack_a) == 1)
	{
		while (*stack_a != NULL)
		{	
			x = ft_itoa(*(int *)(*stack_a)->content);
			if (x[(ft_strlen(x) - 1) - i] == j || !x[(ft_strlen(x) - 1) - i])
			{
				push_rules(stack_a, stack_b, "pb");
			}
			else
			{
				if(check_index(stack_a, i) == 1)
				{
					rotate_rules(stack_a, stack_b, "ra");
				}
				else
				{
					if (find_digit(stack_a, j, i) == 1)
					{
						// if (smarter_rotate(stack_a, j, i) == 1)
						// 	reverse_rules(stack_a, stack_b,"rra");
						// else
							rotate_rules(stack_a, stack_b, "ra");
					}
					else
					{
						j++;
					}
				}
			}
		}
		j = '0';
		// print_list(*stack_a,*stack_b);
		// printf("________________\n");

		while (*stack_b != NULL)
		{
			push_rules(stack_a, stack_b, "pa");
		}
		print_list(*stack_a,*stack_b);
	}
	i++;
	// printf("this is max d%d\n",max_d);
	
}
//getmax num
//get max digit
//convert int to char and see if digit exit if he does i++