/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:36:59 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/19 20:46:33 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// int	main(void)
// {
// 	printf("Factorial of -1 = %d\n", ft_recursive_factorial(-1));
// 	printf("Factorial of 0 = %d\n", ft_recursive_factorial(0));
// 	printf("Factorial of 1 = %d\n", ft_recursive_factorial(1));
// 	printf("Factorial of 5 = %d\n", ft_recursive_factorial(5));
// }
