/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:07:50 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/20 15:45:01 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (max != min)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}
