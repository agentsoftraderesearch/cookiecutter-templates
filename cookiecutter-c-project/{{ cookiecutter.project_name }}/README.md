# {{ cookiecutter.project_name }}  

{{ cookiecutter.project_name | replace("-", "_") }} is a C project scaffold generated using [Cookiecutter](https://cookiecutter.readthedocs.io/en/latest/).

## 📦 Project Structure
```bash
.
├── bin/                  # Compiled executables
├── build/                # Object files (temporary build files)
└── docs/                 # Documents
├── include/              # Header files
│   └── {{ cookiecutter.project_name | replace("-", "_") }}.h
├── src/                  # Source files
│   └── main.c
│   └── {{ cookiecutter.project_name | replace("-", "_") }}.c
├── tests/                # Unit tests
│   ├── bin/              # Compiled test binaries
│   └── {{ cookiecutter.project_name | replace("-", "_") }}_tests.c      # Test cases for application logic
└── Makefile              # Makefile for building, testing, and running the project
└── LICENSE
└── README.md
└── .gitignore
```

## Run Tests (using Criterion Library)
```bash
$ make test
$ ./tests/bin/{{ cookiecutter.project_name | replace("-", "_") }}_tests --verbose
```

## Build
```bash
$ make
```

## Run
```bash
$ ./bin/{{ cookiecutter.project_name | replace("-", "_") }}
```
