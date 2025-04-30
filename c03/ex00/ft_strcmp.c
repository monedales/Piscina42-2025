/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:11:16 by maria-ol          #+#    #+#             */
/*   Updated: 2025/04/29 19:12:02 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] == s2[count] && s1[count] != '\0')
		count++;
	return (s1[count] - s2[count]);

}
#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "caSa";
  char str2[] = "casA";
  char str3[] = "casa";

  printf("resultado: %d\n", ft_strcmp(str1, str2));
  printf("resultado2: %d", strcmp(str1, str2));

  return 0;
}

// The  strcmp()  function compares the two strings s1 and s2.  The locale
// is not taken into account.  The comparison is done using unsigned characters.

// strcmp() returns an integer indicating the result of the comparison, as
//  follows:

//  • 0, if the s1 and s2 are equal;

//  • a negative value if s1 is less than s2;

//  • a positive value if s1 is greater than s2.

//  The strncmp() function is similar, except it compares  only  the  first
//  (at most) n bytes of s1 and s2.
