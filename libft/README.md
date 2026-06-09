*This project has been created as part of the 42 curriculum by dimatos-.*

<div align="center">

# 📚 Libft — @42 Madrid

My own C standard library: a reimplementation of essential libc functions along with custom utility functions.

</div>

---

# 📍 Quick Navigation

- [Description](#description)
- [Library Overview](#library-overview)
- [Instructions](#instructions)
- [Resources and References](#resources-and-references)

---

# Description

Libft is the first foundational project of the 42 curriculum.

The main objective is to reimplement from scratch a selection of functions from the standard C library (`libc`), while also developing additional utility functions that are not part of the standard library but prove extremely useful in future projects.

Through this project, several fundamental programming concepts are explored in depth:

* Manual memory management
* Pointer manipulation
* String handling
* Memory block operations
* Type conversion
* Dynamic data structures through linked lists

This library becomes a reusable tool that serves as the foundation for many subsequent projects in the 42 curriculum.

---

# Library Overview

The following sections describe the functions included in the library.

## I. Libc Functions

### Character Classification and Conversion

| Function   | Description                                         |
| ---------- | --------------------------------------------------- |
| ft_isalpha | Checks whether a character is alphabetic            |
| ft_isdigit | Checks whether a character is a digit               |
| ft_isalnum | Checks whether a character is alphanumeric          |
| ft_isascii | Checks whether a character belongs to the ASCII set |
| ft_isprint | Checks whether a character is printable             |
| ft_toupper | Converts a character to uppercase                   |
| ft_tolower | Converts a character to lowercase                   |

---

### Memory Functions

| Function   | Description                               |
| ---------- | ----------------------------------------- |
| ft_memset  | Fills a block of memory with a value      |
| ft_bzero   | Sets a block of memory to zero            |
| ft_memcpy  | Copies memory without handling overlap    |
| ft_memmove | Copies memory while handling overlap      |
| ft_memchr  | Searches for a byte within a memory block |
| ft_memcmp  | Compares two memory blocks                |
| ft_calloc  | Allocates memory initialized to zero      |

---

### String Functions

| Function   | Description                                    |
| ---------- | ---------------------------------------------- |
| ft_strlen  | Calculates the length of a string              |
| ft_strlcpy | Safely copies a string                         |
| ft_strlcat | Safely concatenates strings                    |
| ft_strchr  | Finds the first occurrence of a character      |
| ft_strrchr | Finds the last occurrence of a character       |
| ft_strncmp | Compares strings up to n characters            |
| ft_strnstr | Searches for a substring within another string |
| ft_strdup  | Duplicates a string                            |

---

### Conversion Functions

| Function | Description                       |
| -------- | --------------------------------- |
| ft_atoi  | Converts a string into an integer |

---

## II. Additional Functions

| Function      | Description                                                   |
| ------------- | ------------------------------------------------------------- |
| ft_substr     | Extracts a substring                                          |
| ft_strjoin    | Joins two strings                                             |
| ft_strtrim    | Removes characters from both ends of a string                 |
| ft_split      | Splits a string using a delimiter                             |
| ft_itoa       | Converts an integer into a string                             |
| ft_strmapi    | Applies a function to each character and returns a new string |
| ft_striteri   | Applies a function to each character of a string              |
| ft_putchar_fd | Writes a character to a file descriptor                       |
| ft_putstr_fd  | Writes a string to a file descriptor                          |
| ft_putendl_fd | Writes a string followed by a newline                         |
| ft_putnbr_fd  | Writes a number to a file descriptor                          |

---

## III. Bonus — Linked Lists

| Function        | Description                                  |
| --------------- | -------------------------------------------- |
| ft_lstnew       | Creates a new node                           |
| ft_lstadd_front | Adds a node at the beginning of a list       |
| ft_lstsize      | Counts the number of nodes in a list         |
| ft_lstlast      | Returns the last node of a list              |
| ft_lstadd_back  | Adds a node at the end of a list             |
| ft_lstdelone    | Deletes a single node                        |
| ft_lstclear     | Deletes an entire list                       |
| ft_lstiter      | Iterates through a list applying a function  |
| ft_lstmap       | Creates a new list by transforming each node |

---

# Instructions

## Makefile Structure

The project includes an automated Makefile used to generate the static library.

### Available Rules

| Command     | Action                               |
| ----------- | ------------------------------------ |
| make        | Builds the library                   |
| make clean  | Removes object files                 |
| make fclean | Removes object files and the library |
| make re     | Rebuilds the entire project          |

---

## Compilation

```bash
make
```

This generates:

```text
libft.a
```

---

# Resources and References

## Documentation

* ISO C Standard
* The C Programming Language — Kernighan & Ritchie
* GNU C Library (glibc)
* POSIX Documentation
* Linux Man Pages

---

## Testing Tools

* Tripouille's libftTester
* mapena-z's libft-tester

---

## Use of Artificial Intelligence

In compliance with the project requirements:

Artificial Intelligence was used exclusively as a supporting tool for:

* Understanding the behavior of certain standard library functions.
* Clarifying concepts related to memory management, pointers, and linked lists.
* Analyzing edge cases.
* Reviewing documentation and improving the quality of this README.

The implementation, debugging, and final validation of all functions were performed manually by the author.

---

# 👨‍💻 Author

**Diego Matos**
