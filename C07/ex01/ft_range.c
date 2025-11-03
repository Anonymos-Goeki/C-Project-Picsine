/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 13:06:30 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/20 15:45:02 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (NULL);
	while (min != max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
