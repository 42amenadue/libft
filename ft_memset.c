/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <iscoffee.learning@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:55:39 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/13 17:55:39 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <iscoffee.learning@gmail.c>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:51:19 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/13 17:51:19 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:08:32 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/07 11:08:32 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amenadue <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:05:46 by amenadue          #+#    #+#             */
/*   Updated: 2021/09/07 11:05:46 by amenadue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		*(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}
