/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcoban <gcoban@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 13:37:13 by gcoban            #+#    #+#             */
/*   Updated: 2025/08/12 14:09:39 by gcoban           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] && i < size)
		i++;
	while (src[s] && i + s + 1 < size)
	{
		dest[i + s] = src[s];
		s++;
	}
	if (i < size)
	{
		dest[i + s] = '\0';
	}
	while (src[s])
	{
		s++;
	}
	return (i + s);
}

// int	main(void)
// {
// 	char puffer[15] = "Hallo";
// 	unsigned int r;

// 	r = ft_strlcat(puffer, "Welt", sizeof(puffer));
// 	printf("Ergebniss: '%s'\n", puffer);
// 	printf("Verwendete Zeichen: %u\n", r);
// }
