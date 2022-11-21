/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 19:24:28 by aeloyan           #+#    #+#             */
/*   Updated: 2022/09/09 19:21:03 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "ft_printf.h"
# include <stdarg.h> 
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int		check_repeat(t_list *a,int n);
void	initialize(int ac, char **av, t_list **a);
void	print_instruction(int i, char *str);
void	s(char *str, int a, ...);
void	p(char *str, t_list **dst, t_list **src);
void	r(char *str, int a, ...);
void	rr(char *str, int a, ...);
#endif
