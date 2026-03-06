# Libft

Libft is a custom implementation of several standard C library functions.
The goal of this project is to recreate commonly used functions from the C standard library and understand how they work internally.

This project focuses on low-level programming concepts such as:

* memory management
* string manipulation
* pointer operations
* data structures

The library can be used in other C projects as a base utility library.

---

# Features

The library includes reimplemented versions of common functions from:

* `<string.h>`
* `<stdlib.h>`
* `<ctype.h>`
* `<unistd.h>`

It also includes additional utility functions that simplify common programming tasks in C.

---

# Implemented Functions

## Memory Functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`

## String Functions

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strdup`

## Character Functions

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`
* `ft_toupper`
* `ft_tolower`

## Conversion Functions

* `ft_atoi`

## Memory Allocation

* `ft_calloc`

## Additional Utility Functions

* `ft_substr`
* `ft_strjoin`
* `ft_strtrim`
* `ft_split`
* `ft_itoa`
* `ft_strmapi`
* `ft_striteri`
* `ft_putchar_fd`
* `ft_putstr_fd`
* `ft_putendl_fd`
* `ft_putnbr_fd`

---

# Installation

Clone the repository:

```bash
git clone https://github.com/KrzysztofMarczynski/libft.git
cd libft
```

Compile the library:

```bash
make
```

This will generate the static library:

```
libft.a
```

---

# Usage

Include the header file in your C project:

```c
#include "libft.h"
```

Then compile your program together with the library:

```bash
gcc main.c libft.a
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int main()
{
    char *str = "Hello";
    printf("Length: %zu\n", ft_strlen(str));
}
```

---

# Project Structure

```
libft/
│
├── ft_*.c
├── ft_*.h
├── Makefile
└── README.md
```

---

# Learning Goals

This project helped me understand:

* how standard C library functions work internally
* pointer manipulation
* memory management in C
* writing reusable utility libraries
* compiling static libraries
