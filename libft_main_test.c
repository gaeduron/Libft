/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j05-2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 18:04:57 by gduron            #+#    #+#             */
/*   Updated: 2017/04/10 16:55:47 by gduron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	printf("______________________ PART 1 ______________________\n");
	printf("\n________str* group________\n");
	printf("\n________is* group________\n");
	printf("\n________to* group________\n");
	printf("\n________mem* group________\n");
	printf("\n________others________\n");

	printf("\n______________________ PART 2 ______________________\n");
	printf("\n________str* group________\n");
	printf("\n________mem* group________\n");
	printf("\n________put* group________\n");
	printf("\n________others________\n");

	printf("\n______________________ BONUS ______________________\n");

/*	printf("ft_putstr :\n");
	char *str = "RESULT: I AM PRINTED";
	ft_putstr(str);

	printf("\n_________________\nft_putnbr :\n");
	ft_putnbr(123456);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	printf("\n_________________\natoi :\n");
	printf("ATOI: 0 = %d, 10 = %d, -10 = %d, int_max = %d, int_min = %d", atoi("0"), atoi("10"), atoi("-10"), atoi("2147483647"), atoi("-2147483648"));
	printf("\nFT_ATOI: nb1 = %d, nb2 = %d, nb3 = %d, nb4 = %d, nb5 = %d", ft_atoi("0"), ft_atoi("10"), ft_atoi("-10"), ft_atoi("2147483647"), ft_atoi("-2147483648"));
	printf("\nATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n   21' = %d", atoi("   -23"), atoi("  - 10"), atoi("  10 23"), atoi("\n\t\v\f\r 21"));
	printf("\nFT_ATOI: '   -23' = %d, '  - 10' = %d, '  10 23' = %d, '\n    21' = %d", ft_atoi("   -23"), ft_atoi("  - 10"), ft_atoi("  10 23"), ft_atoi("\n\t\v\f\r 21"));

	printf("\n_________________\nft_strcpy :\n");
	char dst1[8];
	char dst2[100];
	printf(".h | src = %s and dst = %s\n", "123456", strcpy(dst1, "123456"));
	printf(".h | src = %s and dst = %s\n", "", strcpy(dst2, ""));
	char fdst1[8];
	char fdst2[100];
	printf("ft | src = %s and dst = %s\n", "123456", ft_strcpy(fdst1, "123456"));
	printf("ft | src = %s and dst = %s\n", "", ft_strcpy(fdst2, ""));

	printf("\n_________________\nft_strncpy :\n");
	char dst3[4];
	char dst4[100];
	printf(".h | src = %s and n = 3 and dst = %s\n", "123456", strncpy(dst3, "12", 3));
	printf(".h | src = %s and n = 3 and dst = %s\n", "", strncpy(dst4, "", 3));
	char fdst3[8];
	char fdst4[100];
	printf("ft | src = %s and n = 3 and dst = %s\n", "123456", ft_strncpy(fdst3, "12", 3));
	printf("ft | src = %s and n = 3 and dst = %s\n", "", ft_strncpy(fdst4, "", 3));

	printf("\n_________________\nft_strstr :\n");
	printf(".h | src = %s and to_find = %s and dst = %s\n", "john paul", "paul", strstr("john paul", "paul"));
	printf(".h | src = %s and to_find = %s and dst = %s\n", "john paul", "lea", strstr("john paul", "lea"));	
	printf(".h | src = %s and to_find = %s and dst = %s\n", "john jean", "n", strstr("john jean", "n"));
	printf(".h | src = %s and to_find = %s and dst = %s\n", "123", "1234567", strstr("123", "1234567"));
	printf(".h | src = %s and to_find = %s and dst = %s\n", "john jean", "", strstr("john jean", ""));
	printf(".h | src = %s and to_find = %s and dst = %s\n\n", "john jean", "jeannette", strstr("john jean", "jeannette"));
	
	printf("ft | src = %s and to_find = %s and dst = %s\n", "john paul", "paul", ft_strstr("john paul", "paul"));
	printf("ft | src = %s and to_find = %s and dst = %s\n", "john paul", "lea", ft_strstr("john paul", "lea"));	
	printf("ft | src = %s and to_find = %s and dst = %s\n", "john jean", "n", ft_strstr("john jean", "n"));
	printf("ft | src = %s and to_find = %s and dst = %s\n", "123", "1234567", ft_strstr("123", "1234567"));
	printf("ft | src = %s and to_find = %s and dst = %s\n", "john jean", "", ft_strstr("john jean", ""));
	printf("ft | src = %s and to_find = %s and dst = %s\n", "john jean", "jeannette", ft_strstr("john jean", "jeannette"));


	printf("\n_________________\nstrcmp :\n");
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("12345", "54321"));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("12345", ""));	
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("", "54321"));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("12345", "12345"));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("12345", "123456"));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strcmp("", ""));

	printf("\nft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("12345", "54321"));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("12345", ""));	
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("", "54321"));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("12345", "12345"));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("12345", "123456"));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strcmp("", ""));

	printf("\n_________________\nEX07 :\n");
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("12345", "54321", 0));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("12345", "", 4));	
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("", "54321", 4));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("12345", "12345", 4));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("12345", "123456", 8));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("", "", 4));
	printf(".h | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", strncmp("12345", "123456", -8));

	printf("\nft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("12345", "54321", 0));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("12345", "", 4));	
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("", "54321", 4));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("12345", "12345", 4));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("12345", "123456", 8));
	printf("ft | s1 = %s and s2 = %s and int = %d\n", "12345", "54321", ft_strncmp("", "", 4));

	printf("\n_________________\nEX08 :\n");
	char strdown[10] = "b0n/jour";
	printf("\nB0N/JOUR => %s\n", ft_strupcase(strdown));

	printf("\n_________________\nEX09 :\n");
	printf("\nb0n/jour => %s\n", ft_strlowcase(strdown));

	printf("\n_________________\nEX10 :\n");
	char str_long[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un\n%s\n", ft_strcapitalize(str_long));

	printf("\n_________________\nEX11 :\n");
	printf("\ncoucou = %d", ft_str_is_alpha("coucou"));
	printf("\nhell0 = %d", ft_str_is_alpha("hell0"));
	printf("\n = %d", ft_str_is_alpha(""));

	printf("\n_________________\nEX12 :\n");
	printf("\n1 b0n j0ur = %d", ft_str_is_numeric("1 b0n j0ur"));
	printf("\n1234567890 = %d", ft_str_is_numeric("1234567890"));
	printf("\n = %d", ft_str_is_numeric(""));
	
	printf("\n_________________\nEX13 :\n");
	printf("\nlowercase = %d", ft_str_is_lowercase("lowercase"));
	printf("\nUPPERCASE = %d", ft_str_is_lowercase("UPPERCASE"));
	printf("\n123456 = %d", ft_str_is_lowercase("123456"));

	printf("\n_________________\nEX14 :\n");
	printf("\nlowercase = %d", ft_str_is_uppercase("lowercase"));
	printf("\nUPPERCASE = %d", ft_str_is_uppercase("UPPERCASE"));
	printf("\n123456 = %d", ft_str_is_uppercase("123456"));

	printf("\n_________________\nEX15 :\n");
	printf("\nlowercase = %d", ft_str_is_printable("lowercase"));
	printf("\nprintable = %d", ft_str_is_printable("UPPERCASE"));
	printf("\n123456 = %d", ft_str_is_printable("123456"));
	printf("\n\\12\\23\\127 = %d", ft_str_is_printable("\12\23\127"));

	printf("\n_________________\nEX16 :\n");
	char dst61[11] = "01234";
	char dst62[50] = "654321";
	printf(".h | src = %s and dst = %s\n", "56789", strcat(dst61, "56789"));
	printf(".h | src = %s and dst = %s\n", "", strcat(dst62, ""));
	char fdst61[11] = "01234";
	char fdst62[50] = "654321";
	printf("ft | src = %s and dst = %s\n", "56789", ft_strcat(fdst61, "56789"));
	printf("ft | src = %s and dst = %s\n", "", ft_strcat(fdst62, ""));

	printf("\n_________________\nEX17 :\n");
	char dst71[11] = "01234";
	char dst72[50] = "654321";
	printf(".h | src = %s and dst = %s\n", "56789", strncat(dst71, "56789", 3));
	printf(".h | src = %s and dst = %s\n", "12345", strncat(dst72, "12345", 0));
	printf(".h | src = %s and dst = %s\n", "abc", strncat(dst72, "abc", 5));
	char fdst71[11] = "01234";
	char fdst72[50] = "654321";
	printf("ft | src = %s and dst = %s\n", "56789", ft_strncat(fdst71, "56789", 3));
	printf("ft | src = %s and dst = %s\n", "12345", ft_strncat(fdst72, "12345", 0));
	printf("ft | src = %s and dst = %s\n", "abc", ft_strncat(fdst72, "abc", 5));*/
}
