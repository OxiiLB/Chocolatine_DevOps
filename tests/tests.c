/*
** EPITECH PROJECT, 2023
** tests
** File description:
** all the unit tests are there
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "header.h"
#include "my_lib.h"

static void redirect_all_std(void) {
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(Name_group_test, name_test, .init=redirect_all_std)
{

}
