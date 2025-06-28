# Setup and Installation for `cookiecutter-c-project`

This guide walks you through the steps to install `cookiecutter`, set up the `cookiecutter-c-project` template, and generate a new C project scaffold.

## 📦 Requirements

Before using `cookiecutter` and this template, make sure you have the following installed:

- [Python](https://www.python.org/downloads/) (Version 3 or above)
- [pip](https://pip.pypa.io/en/stable/) (Python's package manager)

## 🚀 Installation

### 1. Install `cookiecutter`

First, install `cookiecutter` using `pip`. Open your terminal or command prompt and run the following command:

```bash
$ pip install cookiecutter
```

### 2. Generate project from template
```bash
$ cookiecutter cookiecutter-c-project

# Fill out prompts (example) ** NOTE: hyphens ('-') are converted to underscores ('_') everywhere EXCEPT the root project folder-name.
  [1/3] project_name (my_c_project_name): my-c-project
  [2/3] author_name (Your name): John Doe
  [3/3] license (MIT): MIT
```

### Project will be generated with the following structure

## 📦 Project Structure
```bash
{{ cookiecutter.project_name }}
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
