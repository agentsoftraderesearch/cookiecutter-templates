#include <criterion/criterion.h>

#include "../include/{{ cookiecutter.project_name | replace("-", "_") }}.h"


void suite_setup(void) {}

void suite_teardown(void) {}

TestSuite({{cookiecutter.project_name | replace("-", "_") }}_tests, .init=suite_setup, .fini=suite_teardown);


Test({{ cookiecutter.project_name | replace("-", "_") }}_tests, placeholder_example_test) {
    char test_var = 'a';
    cr_expect(test_var == 'b', "placeholder test should fail...");
}
