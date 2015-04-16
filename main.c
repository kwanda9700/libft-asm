/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/12 23:25:31 by ybarbier          #+#    #+#             */
/*   Updated: 2015/04/12 23:25:33 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

void	ft_puts(char *s);

int main(void)
{
	// Maxofthree
	/*
	printf("%ld\n", maxofthree(1, -4, -7));
	printf("%ld\n", maxofthree(2, -6, 1));
	printf("%ld\n", maxofthree(2, 3, 1));
	printf("%ld\n", maxofthree(-2, 4, 3));
	printf("%ld\n", maxofthree(2, -6, 5));
	printf("%ld\n", maxofthree(2, 4, 6));
	*/

	// Plus_one
	/*
	int nb = 0;
	nb = plus_one(nb);
	printf("nb: %d\n", nb);
	*/

	// Additionner 2 nombres
	/*
	int nb1 = 20;
	int nb2 = 22;
	int res = 0;
	res = add_two_numbers(nb1, nb2);
	printf("Result: %d + %d = %d\n", nb1, nb2, res);
	*/

	//Bzero
	/*
	char str[10] = "Salut";
	ft_bzero(&str, 1);
	printf("Str: %s\n", str);
	*/

	//Is Alpha
	// Majuscule
/*
	printf("Is alpha: %d\n", ft_isalpha('A'));
	printf("Is alpha: %d\n", ft_isalpha('B'));
	printf("Is alpha: %d\n", ft_isalpha('Z'));

	printf("Is alpha: %d\n", ft_isalpha('a'));
	printf("Is alpha: %d\n", ft_isalpha('b'));
	printf("Is alpha: %d\n", ft_isalpha('z'));

	printf("Is alpha: %d\n", ft_isalpha(0x41));
	printf("Is alpha: %d\n", ft_isalpha(0x5a));

	//False
	printf("Is alpha: %d\n", ft_isalpha(0x40));
	printf("Is alpha: %d\n", ft_isalpha(0x5b));
	printf("Is alpha: %d\n", ft_isalpha(0x5c));

	// Minuscule
	//False
	printf("Is alpha: %d\n", ft_isalpha(0x7c));
	printf("Is alpha: %d\n", ft_isalpha(0x5e));
*/

	//Is Digit
	//True
/*
	printf("Is digit: %d\n", ft_isdigit(0x30));
	printf("Is digit: %d\n", ft_isdigit('0'));
	printf("Is digit: %d\n", ft_isdigit('1'));
	printf("Is digit: %d\n", ft_isdigit('2'));
	printf("Is digit: %d\n", ft_isdigit('3'));
	printf("Is digit: %d\n", ft_isdigit('4'));
	printf("Is digit: %d\n", ft_isdigit('5'));
	printf("Is digit: %d\n", ft_isdigit('6'));
	printf("Is digit: %d\n", ft_isdigit('7'));
	printf("Is digit: %d\n", ft_isdigit('8'));
	printf("Is digit: %d\n", ft_isdigit('9'));
	printf("Is digit: %d\n", ft_isdigit(0x39));

	//False
	printf("Is digit: %d\n", ft_isdigit(0x29));
	printf("Is digit: %d\n", ft_isdigit(0x3a));
	printf("Is digit: %d\n", ft_isdigit('/'));
	printf("Is digit: %d\n", ft_isdigit('.'));
	printf("Is digit: %d\n", ft_isdigit(':'));
*/


	//Is Alpha num
/*
	printf("__TRUE__\n");
	printf("Is digit: %d\n", ft_isalnum(0x30));
	printf("Is digit: %d\n", ft_isalnum('0'));
	printf("Is digit: %d\n", ft_isalnum('1'));
	printf("Is digit: %d\n", ft_isalnum('2'));
	printf("Is digit: %d\n", ft_isalnum('3'));
	printf("Is digit: %d\n", ft_isalnum('4'));
	printf("Is digit: %d\n", ft_isalnum('5'));
	printf("Is digit: %d\n", ft_isalnum('6'));
	printf("Is digit: %d\n", ft_isalnum('7'));
	printf("Is digit: %d\n", ft_isalnum('8'));
	printf("Is digit: %d\n", ft_isalnum('9'));
	printf("Is digit: %d\n", ft_isalnum(0x39));

	// Majuscule
	printf("Is alpha: %d\n", ft_isalnum('A'));
	printf("Is alpha: %d\n", ft_isalnum('B'));
	printf("Is alpha: %d\n", ft_isalnum('Z'));

	printf("Is alpha: %d\n", ft_isalnum('a'));
	printf("Is alpha: %d\n", ft_isalnum('b'));
	printf("Is alpha: %d\n", ft_isalnum('z'));

	printf("Is alpha: %d\n", ft_isalnum(0x41));
	printf("Is alpha: %d\n", ft_isalnum(0x5a));

	printf("__FALSE__\n");

	//False
	printf("Is alpha: %d\n", ft_isalnum(0x40));
	printf("Is alpha: %d\n", ft_isalnum(0x5b));
	printf("Is alpha: %d\n", ft_isalnum(0x5c));

	// Minuscule
	//False
	printf("Is alpha: %d\n", ft_isalnum(0x7c));
	printf("Is alpha: %d\n", ft_isalnum(0x5e));

	//False
	printf("Is digit: %d\n", ft_isalnum(0x29));
	printf("Is digit: %d\n", ft_isalnum(0x3a));
	printf("Is digit: %d\n", ft_isalnum('/'));
	printf("Is digit: %d\n", ft_isalnum('.'));
	printf("Is digit: %d\n", ft_isalnum(':'));


	//False
	printf("Is digit: %d\n", ft_isalnum(0x29));
	printf("Is digit: %d\n", ft_isalnum(0x3a));
	printf("Is digit: %d\n", ft_isalnum('/'));
	printf("Is digit: %d\n", ft_isalnum('.'));
	printf("Is digit: %d\n", ft_isalnum(':'));
	printf("Is digit: %d\n", ft_isalnum(0));

*/

/*
	//Is ASCII
	//True
	printf("__TRUE__\n");

	printf("Is ascii: %d\n", ft_isascii(0x29));
	printf("Is ascii: %d\n", ft_isascii(0));
	printf("Is ascii: %d\n", ft_isascii(0x51));
	printf("Is ascii: %d\n", ft_isascii(101));
	printf("Is ascii: %d\n", ft_isascii(44));
	printf("Is ascii: %d\n", ft_isascii(127));
	printf("Is ascii: %d\n", ft_isascii('a'));


	//False
	printf("__FALSE__\n");

	printf("Is ascii: %d\n", ft_isascii(-1));
	printf("Is ascii: %d\n", ft_isascii(128));
	printf("Is ascii: %d\n", ft_isascii(0x8a));
	printf("Is ascii: %d\n", ft_isascii(129));
*/

/*
	//Is Print
	//True
	printf("__TRUE__\n");

	printf("Is print: %d\n", ft_isprint(0x29));
	printf("Is print: %d\n", ft_isprint(0x51));
	printf("Is print: %d\n", ft_isprint(101));
	printf("Is print: %d\n", ft_isprint(44));
	printf("Is print: %d\n", ft_isprint('a'));
	printf("Is print: %d\n", ft_isprint(0x20));
	printf("Is print: %d\n", ft_isprint(' '));
	printf("Is print: %d\n", ft_isprint(55));


	//False
	printf("__FALSE__\n");

	printf("Is print: %d\n", ft_isprint('	'));
	printf("Is print: %d\n", ft_isprint('\t'));
	printf("Is print: %d\n", ft_isprint(127));
	printf("Is print: %d\n", ft_isprint(0));
	printf("Is print: %d\n", ft_isprint(-1));
	printf("Is print: %d\n", ft_isprint(128));
	printf("Is print: %d\n", ft_isprint(0x8a));
	printf("Is print: %d\n", ft_isprint(129));
*/

/*
	//ToUpper
	//True
	printf("__TRUE__\n");

	printf("ToUpper: %c\n", ft_toupper('a'));
	printf("ToUpper: %c\n", ft_toupper('b'));
	printf("ToUpper: %c\n", ft_toupper('y'));
	printf("ToUpper: %c\n", ft_toupper('z'));
	printf("ToUpper: %c\n", ft_toupper('e'));
	printf("ToUpper: %c\n", ft_toupper('o'));
	printf("ToUpper: %c\n", ft_toupper(98));
	printf("ToUpper: %c\n", ft_toupper(97));
	printf("ToUpper: %c\n", ft_toupper(122));


	//False
	printf("__FALSE__\n");

	printf("ToUpper: %c\n", ft_toupper('A'));
	printf("ToUpper: %c\n", ft_toupper('B'));
	printf("ToUpper: %c\n", ft_toupper('Z'));
	printf("ToUpper: %c\n", ft_toupper(0));
	printf("ToUpper: %c\n", ft_toupper(92));
	printf("ToUpper: %c\n", ft_toupper(96));
	printf("ToUpper: %c\n", ft_toupper(123));
	printf("ToUpper: %c\n", ft_toupper(' '));
	printf("ToUpper: %c\n", ft_toupper('	'));
	printf("ToUpper: %c\n", ft_toupper('\t'));
	printf("ToUpper: %c\n", ft_toupper(127));
	printf("ToUpper: %c\n", ft_toupper(0));
	printf("ToUpper: %c\n", ft_toupper(-1));
	printf("ToUpper: %c\n", ft_toupper(128));
	printf("ToUpper: %c\n", ft_toupper(0x8a));
	printf("ToUpper: %c\n", ft_toupper(129));



	//ToLower
	printf("__ToLower__\n");
	//True
	printf("__TRUE__\n");
	printf("ToLower: %c\n", ft_tolower('A'));
	printf("ToLower: %c\n", ft_tolower('B'));
	printf("ToLower: %c\n", ft_tolower('C'));
	printf("ToLower: %c\n", ft_tolower('Z'));
	printf("ToLower: %c\n", ft_tolower('E'));
	printf("ToLower: %c\n", ft_tolower('O'));
	printf("ToLower: %c\n", ft_tolower(66));
	printf("ToLower: %c\n", ft_tolower(67));
	printf("ToLower: %c\n", ft_tolower(90));


	//False
	printf("__FALSE__\n");
	printf("ToLower: %c\n", ft_tolower('a'));
	printf("ToLower: %c\n", ft_tolower('b'));
	printf("ToLower: %c\n", ft_tolower('y'));
	printf("ToLower: %c\n", ft_tolower('z'));
	printf("ToLower: %c\n", ft_tolower('e'));
	printf("ToLower: %c\n", ft_tolower('o'));
	printf("ToLower: %c\n", ft_tolower(98));
	printf("ToLower: %c\n", ft_tolower(97));
	printf("ToLower: %c\n", ft_tolower(122));
	printf("ToLower: %c\n", ft_tolower(0));
	printf("ToLower: %c\n", ft_tolower(92));
	printf("ToLower: %c\n", ft_tolower(96));
	printf("ToLower: %c\n", ft_tolower(123));
	printf("ToLower: %c\n", ft_tolower(' '));
	printf("ToLower: %c\n", ft_tolower('	'));
	printf("ToLower: %c\n", ft_tolower('\t'));
	printf("ToLower: %c\n", ft_tolower(127));
	printf("ToLower: %c\n", ft_tolower(0));
	printf("ToLower: %c\n", ft_tolower(-1));
	printf("ToLower: %c\n", ft_tolower(128));
	printf("ToLower: %c\n", ft_tolower(0x8a));
	printf("ToLower: %c\n", ft_tolower(129));
*/

	//ft_puts
	printf("__ft_puts__\n");
	ft_puts("Test");
	return (0);
}
