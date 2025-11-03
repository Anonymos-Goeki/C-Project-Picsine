/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:43:11 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 20:42:05 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("Square Root of 0: %d\n", ft_sqrt(0));
// 	printf("Square Root of -2: %d\n", ft_sqrt(-2));
// 	printf("Square Root of 4: %d\n", ft_sqrt(4));
// 	printf("Square Root of 10: %d\n", ft_sqrt(10));
// 	printf("Square Root of 25: %d\n", ft_sqrt(25));
// }
