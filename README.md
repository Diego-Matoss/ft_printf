*This project was created as part of the 42 curriculum by dimatos-.*

# ft_printf

## Description

`ft_printf` is a custom implementation of the standard C library function `printf()`.

The goal of this project is to understand how variadic functions work in C. A variadic function is a function that can receive a variable number of arguments. In this project, this is done using the macros from `<stdarg.h>`: `va_start`, `va_arg`, and `va_end`.

The function reproduces part of the behavior of the original `printf()` function, allowing formatted output for characters, strings, pointers, signed integers, unsigned integers, hexadecimal numbers, and percent signs.

The prototype of the function is:

```c
int ft_printf(char const *format, ...);
```

Like the original `printf()`, `ft_printf()` returns the total number of characters printed.

---

## Features

The mandatory part of the project handles the following conversions:

| Conversion | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

This project does not implement the internal buffer management of the original `printf()`.

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate the following library file in the root of the repository:

```bash
libftprintf.a
```

### Cleaning object files

```bash
make clean
```

### Cleaning object files and the library

```bash
make fclean
```

### Recompiling from scratch

```bash
make re
```

---

## Usage

After compiling the library, include the header in your program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Number: %d\n", 42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Percent sign: %%\n");
    return (0);
}
```

Compile your program with:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
```

---

## Technical Decisions

The project is organized around a main function, `ft_printf`, and several helper functions.

The main function reads the format string character by character. When it finds a normal character, it prints it directly. When it finds a `%` character, it checks the next character to determine which conversion must be applied.

Each conversion is handled by a specific helper function. This keeps the code modular, readable, and easier to debug.

The project uses `write()` for output, as required by the subject. It does not use the original `printf()` function internally.

---

## Algorithm

The main algorithm works as follows:

1. Initialize a `va_list` using `va_start`.
2. Iterate through the format string.
3. If the current character is not `%`, print it directly.
4. If the current character is `%`, check the next character.
5. Depending on the conversion specifier, retrieve the correct argument using `va_arg`.
6. Send the argument to the corresponding helper function.
7. Add the number of printed characters to a counter.
8. At the end, clean the argument list using `va_end`.
9. Return the total number of printed characters.

The character counter is essential because `printf()` does not only print output; it also returns the number of characters written.

---

## Data Structures

This project does not require complex data structures.

The main structure used is:

```c
va_list args;
```

`va_list` is used to access the variable arguments passed to `ft_printf()`.

The project also uses basic C types such as:

```c
char
char *
int
unsigned int
unsigned long
```

For the `%p` conversion, the pointer is converted to an unsigned integer type large enough to represent a memory address, and then printed in hexadecimal format.

---

## Resources

Useful resources for this project:

- `man 3 printf`
- `man 3 stdarg`
- `man 2 write`
- C documentation about variadic functions
- C documentation about number bases: decimal, unsigned decimal, and hexadecimal
- The original `printf()` behavior from the C standard library as a comparison reference

---

## Use of AI

Artificial intelligence was used as a learning and documentation support tool.

It was used to:

- Better understand the project subject.
- Structure and improve the README.
- Clarify concepts related to variadic functions.
- Review explanations about the algorithm and technical decisions.
- Improve the wording of the documentation.

AI was not used as a replacement for understanding the code. The implementation, debugging, and final decisions were reviewed and understood manually as part of the learning process.

---

## Project Requirements

According to the subject, the project must:

- Be written in C.
- Follow the 42 Norm.
- Compile with `-Wall -Wextra -Werror`.
- Use a `Makefile` with the rules `NAME`, `all`, `clean`, `fclean`, and `re`.
- Generate a static library named `libftprintf.a`.
- Use `ar` to create the library.
- Avoid unexpected crashes such as segmentation faults, bus errors, or double frees.
- Avoid memory leaks.
- Reproduce the behavior of the original `printf()` for the required conversions.

---

## Author

Created by `dimatos-` as part of the 42 curriculum.