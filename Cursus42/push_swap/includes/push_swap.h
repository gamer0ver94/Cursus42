/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 17:26:44 by dpaulino          #+#    #+#             */
/*   Updated: 2022/07/21 17:34:03 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	create_stack(t_list **stack_a, int **args);
void	print_list(t_list *stack_a, t_list *stack_b);
int	sort_verification(t_list **list);
void	error_handler(int error);
void	swap_rules(t_list **stack_a, t_list **stack_b, char *rule);
void	push_rules(t_list **stack_a, t_list **stack_b, char *rule);
void	del_first_elem(t_list **lst);
void	rotate_rules(t_list **stack_a, t_list **stack_b, char *rule);
void	reverse_rules(t_list **stack_a, t_list **stack_b, char *rule);
void	sort_big_num(t_list **stack_a, t_list **stack_b);
int	smart_rotate(t_list **stack_a, int small_num, int size);
int	*parse_args(int argc, char **argv);