/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:42:42 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/12 14:10:51 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	s;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	s = 0;
	while (src[s] != '\0')
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest[20] = "Hello";
// 	char src[] = "Wolrd";
// 	ft_strcat(dest, src);
// 	printf("%s\n", dest);
// 	return 0;
// }