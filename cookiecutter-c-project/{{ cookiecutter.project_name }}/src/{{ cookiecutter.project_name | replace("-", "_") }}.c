#include <stdio.h>

#include "{{ cookiecutter.project_name | replace("-", "_") }}.h"


// placeholder example function
void {{ cookiecutter.project_name | replace("-", "_") }}_imported_function(const char *message) {
    printf("Hello, %s!\n", message);
}
