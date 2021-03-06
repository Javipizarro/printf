/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 01:12:49 by jpizarro          #+#    #+#             */
/*   Updated: 2020/02/01 02:25:15 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Tests for any upper-case letter.
*/

int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
