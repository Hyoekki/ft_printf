/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:27:59 by jhyokki           #+#    #+#             */
/*   Updated: 2024/11/23 11:43:27 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <check.h>
#include "../include/ft_printf.h"

/* Test printing a simple string */
START_TEST(test_ft_printf_hello_world)
{
	int	ret = ft_printf("Hello, World!\n");
	ck_assert_int_eq(ret, 14);
}
END_TEST

/* Test printing a positive int with %d */
START_TEST(test_ft_printf_positive_d)
{
	int	ret = ft_printf("Number: %d\n", 42);
	ck_assert_int_eq(ret, 11);
}
END_TEST

/* Test printing a negative int with %d */
START_TEST(test_ft_printf_negative_d)
{
	int	ret = ft_printf("Number: %d\n", -42);
	ck_assert_int_eq(ret, 12);
}
END_TEST

/* Test printing a zero int with %d */
START_TEST(test_ft_printf_zero_d)
{
	int	ret = ft_printf("Number: %d\n", 0);
	ck_assert_int_eq(ret, 10);
}
END_TEST

/* Test printing a positive int with %i */
START_TEST(test_ft_printf_positive_i)
{
	int	ret = ft_printf("Number: %i\n", 42);
	ck_assert_int_eq(ret, 11);
}
END_TEST

/* Test printing a negative int with %i */
START_TEST(test_ft_printf_negative_i)
{
	int	ret = ft_printf("Number: %i\n", -42);
	ck_assert_int_eq(ret, 12);
}
END_TEST

/* Test printing a zero int with %i */
START_TEST(test_ft_printf_zero_i)
{
	int	ret = ft_printf("Number: %i\n", 0);
	ck_assert_int_eq(ret, 10);
}
END_TEST

Suite *ft_printf_suite(void)
{
	Suite	*s;
	TCase	*tc_core;

	s = suite_create("ft_printf");
	tc_core = tcase_create("Core");

	tcase_add_test(tc_core, test_ft_printf_hello_world);

	/* Add tests for %d specifier*/
	tcase_add_test(tc_core, test_ft_printf_positive_d);
	tcase_add_test(tc_core, test_ft_printf_negative_d);
	tcase_add_test(tc_core, test_ft_printf_zero_d);

	/* Add test for %i specifier*/
	tcase_add_test(tc_core, test_ft_printf_positive_i);
	tcase_add_test(tc_core, test_ft_printf_negative_i);
	tcase_add_test(tc_core, test_ft_printf_zero_i);

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
