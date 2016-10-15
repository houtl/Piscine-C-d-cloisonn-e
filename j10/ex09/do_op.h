/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thou <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 17:42:42 by thou              #+#    #+#             */
/*   Updated: 2016/08/22 16:16:35 by thou             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef void	(*t_s_opp)(int, int);

typedef struct	s_opp
{
	char		*c;
	t_s_opp		fonc;
}				t_opp;

int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_add(int i, int j);
void			ft_sub(int i, int j);
void			ft_mul(int i, int j);
void			ft_div(int i, int j);
void			ft_mod(int i, int j);
void			ft_usage();

#endif
