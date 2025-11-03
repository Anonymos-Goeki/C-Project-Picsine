/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:57:00 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/04 09:54:25 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f_loop;
	char	s_loop;
	char	t_loop;

	f_loop = '0';
	while (f_loop <= '7')
	{
		s_loop = f_loop + 1;
		while (s_loop <= '8')
		{
			t_loop = s_loop + 1;
			while (t_loop <= '9')
			{
				write(1, &f_loop, 1);
				write(1, &s_loop, 1);
				write(1, &t_loop, 1);
				if (f_loop == '7' && s_loop == '8' && t_loop == '9')
					return ;
				write(1, ", ", 2);
				t_loop++;
			}
			s_loop++;
		}
		f_loop++;
	}
}
