/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaulino <dpaulino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:08:35 by dpaulino          #+#    #+#             */
/*   Updated: 2022/03/20 14:08:35 by dpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINT_H
# define LIBFTPRINT_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../libft/libft.h"


int ft_printf(const char *, ...);
int hexaconvert(int arg);
int ft_putstr(char *string);
int	ft_putnbr(int n);
int	ft_writeitoa(int n);
#endif