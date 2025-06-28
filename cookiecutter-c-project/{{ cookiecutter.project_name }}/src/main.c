#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#include "{{ cookiecutter.project_name | replace("-", "_") }}.h"


int main(int argc, char **argv) {
    printf("Hello from {{ cookiecutter.project_name | replace("-", "_") }}!\n");
    {{ cookiecutter.project_name | replace("-", "_") }}_imported_function("Placeholder function imported from src/{{ cookiecutter.project_name | replace("-", "_") }}.c");
    return 0;
}
