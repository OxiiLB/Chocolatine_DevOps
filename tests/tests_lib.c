/*
** EPITECH PROJECT, 2023
** tests
** File description:
** unit tests of the lib
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my_lib.h"

static void redirect_all_std(void) {
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_str_is_printable_test, printable_str, .init=redirect_all_std)
{
    char *str = "Hello World !";
    int result = my_str_isprintable(str);

    cr_assert_eq(result, 1);
}

Test(my_str_is_upper_test, upper_str, .init=redirect_all_std)
{
    char *str = "HELLO WORLD";
    int result = my_str_isupper(str);

    cr_assert_eq(result, 1);
}

Test(my_str_is_lower_test, lower_str, .init=redirect_all_std)
{
    char *str = "hello world";
    int result = my_str_islower(str);

    cr_assert_eq(result, 1);
}

Test(my_compute_power_rec_test, power_2, .init=redirect_all_std)
{
    int result = my_compute_power_rec(2, 2);
    cr_assert_eq(result, 4);
}

Test(my_strlen_test, str_10, .init=redirect_all_std)
{
    char *str = "HELLOWORLD";
    int result = my_strlen(str);

    cr_assert_eq(result, 10);
}

Test(my_find_prime_sup_test, find_7, .init=redirect_all_std)
{
    int result = my_find_prime_sup(6);

    cr_assert_eq(result, 7);
}

Test(my_strcat_test, ezz_test, .init=redirect_all_std)
{
    char *str = malloc(sizeof(char) * 4);
    str[0] = 'e';
    str[1] = 'z';
    char *result = my_strcat(str, "z");
    cr_assert_str_eq(result, "ezz");
}

Test(my_strncmp_test, compare_ezz, .init=redirect_all_std)
{
    char *str = "ezz";
    int result = my_strncmp(str, "ezz", 2);
    cr_assert_eq(result, 0);
}

Test(my_isneg_test, pos_nbr, .init=redirect_all_std)
{
    my_isneg(2);
    cr_assert_stdout_eq_str("P");
}

Test(my_isneg_test, neg_nbr, .init=redirect_all_std)
{
    my_isneg(-2);
    cr_assert_stdout_eq_str("N");
}

Test(my_strcmp_test, compare_ezz, .init=redirect_all_std)
{
    char *str = "ezz";
    int result = my_strcmp(str, "ezz");
    cr_assert_eq(result, 0);
}

Test(my_strncpy_test, cpy_basic, .init=redirect_all_std)
{
    char *str = malloc(sizeof(char) * 6);
    char *result = my_strncpy(str, "World !", 5);
    cr_assert_str_eq(result, "World");
}

Test(my_strcpy_test, cpy_basic, .init=redirect_all_std)
{
    char *str = malloc(sizeof(char) * 6);
    char *result = my_strcpy(str, "World !");
    cr_assert_str_eq(result, "World !");
}

Test(my_is_prime_test, prime_nbr, .init=redirect_all_std)
{
    int result = my_is_prime(5);
    cr_assert_eq(result, 1);
}

Test(my_is_prime_test, _non_prime_nbr, .init=redirect_all_std)
{
    int result = my_is_prime(6);
    cr_assert_eq(result, 0);
}

Test(putchar_test, print_a, .init=redirect_all_std)
{
    my_putchar('a');
    cr_assert_stdout_eq_str("a");
}

Test(my_str_isalpha_test, alpha_str, .init=redirect_all_std)
{
    int result = my_str_isalpha("Hello");
    cr_assert_eq(result, 1);
}

Test(my_str_isnum_test, num_str, .init=redirect_all_std)
{
    int result = my_str_isnum("10");
    cr_assert_eq(result, 1);
}

Test(my_str_isnum_test, non_num_str, .init=redirect_all_std)
{
    int result = my_str_isnum("10a");
    cr_assert_eq(result, 0);
}

Test(my_str_isalpha_test, non_alpha_str, .init=redirect_all_std)
{
    int result = my_str_isalpha("Hello1");
    cr_assert_eq(result, 0);
}

Test(my_put_str_test, print_str, .init=redirect_all_std)
{
    char *str = "Hello World !";
    int result = my_putstr(str);
    cr_assert_stdout_eq_str("Hello World !");
}

Test(my_put_nbr_test, print_nbr, .init=redirect_all_std)
{
    my_put_nbr(10);
    cr_assert_stdout_eq_str("10");
}

Test(my_str_to_word_array_test, array_split, .init=redirect_all_std)
{
    char **array = my_str_to_word_array("Hello World");
    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_eq(array[1], "World");
}

Test(my_spliter_test, array_split, .init=redirect_all_std)
{
    char **array = my_spliter("Hello-World", '-');
    cr_assert_str_eq(array[0], "Hello");
    cr_assert_str_eq(array[1], "World");
}

Test(my_isalnum_test, alnum_char, .init=redirect_all_std)
{
    int result = my_isalnum('a');
    cr_assert_eq(result, true);
}

Test(my_isalnum_test, none_alnum_char, .init=redirect_all_std)
{
    bool result = my_isalnum('/');
    cr_assert_eq(result, false);
}

Test(my_printf_test, print_str, .init=redirect_all_std)
{
    my_printf("Hello World !");
    cr_assert_stdout_eq_str("Hello World !");
}

Test(my_printf_test, print_str_flag, .init=redirect_all_std)
{
    char *str = "Hello World !";
    my_printf("%s", str);
    cr_assert_stdout_eq_str("Hello World !");
}

Test(my_printf_test, print_nbr_flag, .init=redirect_all_std)
{
    my_printf("%d", 10);
    cr_assert_stdout_eq_str("10");
}

Test(my_printf_test, print_octal_flag, .init=redirect_all_std)
{
    my_printf("%o", 10);
    cr_assert_stdout_eq_str("12");
}
