/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:18:39 by tchaves           #+#    #+#             */
/*   Updated: 2023/10/17 16:24:18 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	else
	{
		return (0);
	}
}

/*#include <ctype.h>
int main(){
   
   printf("%d\n", ft_isalpha(48));
   printf("%d", isalpha(48));

}*/