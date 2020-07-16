/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lakazzie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:20:07 by lakazzie          #+#    #+#             */
/*   Updated: 2020/07/16 13:51:43 by lakazzie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_fibonacci(int index)
{
	if(index == 0)
		return(0);
	else if(index < 3)
		return(1);
	else if(index < 0)
		return(-1);
	else if(index > 0)
		return(ft_fibonacci(index -1) + ft_fibonacci(index -2));
	else
		return(1);
}
