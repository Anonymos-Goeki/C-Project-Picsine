/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:24:59 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/04 09:54:42 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negativ;
	char	positiv;

	negativ = 'N';
	positiv = 'P';
	if (n < 0)
	{
		write(1, &negativ, 1);
	}
	else
	{
		write(1, &positiv, 1);
	}
}
