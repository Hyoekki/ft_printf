/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:27:59 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/19 11:47:12 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <check.h>
#include "../src/ft_printf.h"

START_TEST(test_ft_printf_hello_world)
{
	int	ret = ft_printf("Hello, World!\n");
	ck_assert_int_eq(ret, 14);
}
END_TEST

Suite *ft_printf_suite(void)
{
	Suite	*s;
	TCase	*tc_core;

	s = suite_create("ft_printf");
	tc_core = tcase_create("Core");

	tcase_add_test(tc_core, test_ft_printf_hello_world);
	suite_add_tcase(s, tc_core);

	return (s);
}

int	main(void)
{
	int	number_failed;
	Suite	*s;
	SRunner	*sr;

	s = ft_printf_suite();
	sr = srunner_create(s);
	srunner_run_all(sr, CK_NORMAL);
	number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return ((number_failed == 0) ? 0 : 1);
}
