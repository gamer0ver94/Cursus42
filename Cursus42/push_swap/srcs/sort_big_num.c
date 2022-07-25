/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gameoverstation <dpaulino@student.42.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 18:18:06 by gameoverstation   #+#    #+#             */
/*   Updated: 2022/07/25 14:02:47 by gameoverstation  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// int	max_number(t_list **stack_a)
// {
// 	t_list	*tmp;
// 	int		max;

// 	max = 0;
// 	tmp = *stack_a;

// 	while (tmp)
// 	{
// 		if (*(int *)tmp->content > max)
// 		{
// 			max = *(int *)tmp->content;
// 		}
// 		tmp = tmp->next;
// 	}
// 	return (max);
// }

// int	max_digit(int max_n)
// {
// 	char	*n;
// 	int		i;

// 	i = 0;
// 	n = ft_itoa(max_n);
// 	while (n[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

//suplmentair functions for smart rotations

// int	find_digit(t_list **stack, char c, int i)
// {
// 	char	*n;
// 	t_list	*tmp;
// 	int		index;
	
// 	tmp = *stack;
// 	while (tmp)
// 	{
// 		n = ft_itoa(*(int *)tmp->content);
// 		index = ft_strlen(n) - 1 - i;
// 		if (n[index] && n[index] == c)
// 		{
// 			return (1);
// 		}
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }

// int	smarter_rotate(t_list **stack, char c, int i)
// {
// 	char	*n;
// 	t_list	*tmp;
// 	int		index;
// 	int		r;
// 	int		size;

// 	r = 0;
// 	size = ft_lstsize(*stack);
// 	tmp = *stack;
// 	while (tmp)
// 	{
// 		n = ft_itoa(*(int *)tmp->content);
// 		index = ft_strlen(n) - 1 - i;
// 		if (n[index] == c)
// 		{
// 			if (r >= size / 2)
// 				return (1);//it means rra
// 			else
// 				return (0);//it means ra
// 		}
// 		tmp = tmp->next;
// 		r++;
// 	}
// 	return (-1);
// }

int	check_index(t_list **stack, char i)
{
	t_list *tmp;
	char *str;
	tmp = *stack;
	while(tmp)
	{
		str = ft_strdup(tmp->content);
		if (!str[i - 1] || str[i - 1] == '0')
		{
			free(str);
			return (1);
		}
		tmp = tmp->next;
	}
	free(str);
	return (0);
}

void	sort_big_num(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int j;
	char *tmp;
	i = 0;
	j = ft_strlen((char *)(*stack_a)->content);
	while (i < 30)
	{
		tmp = ft_strdup((char *)(*stack_a)->content);
		if (check_index(stack_a, j) == 0)
		{
			while (*stack_b != NULL)
			{
				push_rules(stack_a, stack_b, "pa");
			}
			i++;
			j = ft_strlen((char *)(*stack_a)->content);
		}
		
		
		if (tmp[j - 1] == '0' || !tmp[j - 1])
		{
			push_rules(stack_a, stack_b, "pb");
		}
		else
			rotate_rules(stack_a, stack_b, "ra");
		j--;
	}
	free(tmp);
}
//getmax num
//get max digit
//convert int to char and see if digit exit if he does i++