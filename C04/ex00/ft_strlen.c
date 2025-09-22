/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: SphinxOwl <SphinxOwl@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 21:58:01 by SphinxOwl         #+#    #+#             */
/*   Updated: 2025/09/22 21:58:01 by SphinxOwl        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// int	main(void)
// {
// 	char	*msg;

// 	msg = "Landing on Sylva!";
// 	printf("Astroneer length: %d\n", ft_strlen(msg));
// 	return (0);
// }
