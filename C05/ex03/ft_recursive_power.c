/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:40:56 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 20:42:08 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("Power of 2 ^ -1 = %d\n", ft_recursive_power(2, -1));
// 	printf("Power of 0 ^ 0 = %d\n", ft_recursive_power(0, 0));
// 	printf("Power of 3 ^ 1 = %d\n", ft_recursive_power(3, 1));
// 	printf("Power of -3 ^ 3 = %d\n", ft_recursive_power(-3, 3));
// }
