/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:38:55 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 20:42:11 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("Power of 2 ^ -1 = %d\n", ft_iterative_power(2, -1));
// 	printf("Power of 0 ^ 0 = %d\n", ft_iterative_power(0, 0));
// 	printf("Power of 3 ^ 1 = %d\n", ft_iterative_power(3, 1));
// 	printf("Power of -3 ^ 3 = %d\n", ft_iterative_power(-3, 3));
// }
