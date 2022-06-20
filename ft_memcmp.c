/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakkaya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:31:50 by sakkaya           #+#    #+#             */
/*   Updated: 2022/02/04 14:39:59 by sakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)dst)[i] != ((unsigned char *)src)[i])
			return (((unsigned char *)dst)[i] - ((unsigned char *)src)[i]);
		i++;
	}
	return (0);
}

// isaret edilen 2 bellek bolgesinin de ayni olup olmadigini karsilastirir.
// strcmp --> (string comperson) --> stringleri karsilastirir.
// memcmp --> (memory comperson)--> bellek bolgelerini karsilastirir.
