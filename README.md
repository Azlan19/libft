# Libft

A custom C library recreating standard C library functions and additional utilities for linked lists and memory handling — built from scratch as part of the 42 curriculum.  
✅ **All mandatory and bonus parts completed**  
🏅 **Final score: 125/100**

---

## 📘 Project Overview

The goal of **Libft** is to create a personal library of functions that replicate and extend the functionality of standard C library functions.  
This library serves as a foundation for future 42 projects, ensuring mastery of memory management, pointers, and linked list manipulation in C.

---

## 🧱 Mandatory Part

Reimplemented functions from `<ctype.h>`, `<string.h>`, and `<stdlib.h>` with custom implementations and naming conventions (`ft_` prefix).

### Character Checks
- `ft_isalpha` – Checks if a character is alphabetic.  
- `ft_isdigit` – Checks if a character is a digit (0–9).  
- `ft_isalnum` – Checks if a character is alphanumeric.  
- `ft_isascii` – Checks if a character is within the ASCII range.  
- `ft_isprint` – Checks if a character is printable.

### String and Memory Functions
- `ft_strlen` – Returns the length of a string.  
- `ft_memset` – Fills a block of memory with a specific byte.  
- `ft_bzero` – Sets a block of memory to zero.  
- `ft_memcpy` – Copies memory from one location to another.  
- `ft_memmove` – Safely copies memory areas that may overlap.  
- `ft_strlcpy` – Copies a string with size-bounded safety.  
- `ft_strlcat` – Concatenates strings with size-bounded safety.  
- `ft_toupper` – Converts a lowercase letter to uppercase.  
- `ft_tolower` – Converts an uppercase letter to lowercase.  
- `ft_strchr` – Finds the first occurrence of a character in a string.  
- `ft_strrchr` – Finds the last occurrence of a character in a string.  
- `ft_strncmp` – Compares two strings up to a certain length.  
- `ft_memchr` – Searches for a byte in a block of memory.  
- `ft_memcmp` – Compares two blocks of memory.  
- `ft_strnstr` – Finds a substring within a string, limited by length.  
- `ft_atoi` – Converts a string to an integer.

### Memory Allocation
- `ft_calloc` – Allocates and zero-initializes memory.  
- `ft_strdup` – Duplicates a string in newly allocated memory.

### Additional String Utilities
- `ft_substr` – Extracts a substring from a string.  
- `ft_strjoin` – Concatenates two strings into a new one.  
- `ft_strtrim` – Removes specified characters from both ends of a string.  
- `ft_split` – Splits a string into an array of substrings using a delimiter.  
- `ft_itoa` – Converts an integer to a string.  
- `ft_strmapi` – Applies a function to each character of a string (returns a new string).  
- `ft_striteri` – Applies a function to each character of a string in place.  
- `ft_putchar_fd` – Outputs a character to a given file descriptor.  
- `ft_putstr_fd` – Outputs a string to a given file descriptor.  
- `ft_putendl_fd` – Outputs a string followed by a newline to a file descriptor.  
- `ft_putnbr_fd` – Outputs an integer to a given file descriptor.

---

## 🔁 Bonus Part

Linked list functions implemented using the `t_list` structure.

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

### Linked List Functions

- `ft_lstnew` – Allocates and returns a new node.  
- `ft_lstadd_front` – Adds a new node at the beginning of the list.  
- `ft_lstsize` – Counts the number of nodes in a list.  
- `ft_lstlast` – Returns the last node of the list.  
- `ft_lstadd_back` – Adds a new node at the end of the list.  
- `ft_lstdelone` – Frees the memory of a single node using a given `del` function.  
- `ft_lstclear` – Deletes and frees all nodes of a list.  
- `ft_lstiter` – Iterates over the list and applies a given function to each node.  
- `ft_lstmap` – Creates a new list resulting from the application of a function to every node of the original list.

---

## ⚙️ Makefile Commands

These are the commands you can run in the terminal to compile, clean, and manage the Libft library:

| Command | Description |
|----------|-------------|
| `make` | Compiles all mandatory functions and creates the `libft.a` static library. |
| `make bonus` | Compiles both mandatory and bonus (linked list) functions. |
| `make clean` | Removes all object (`.o`) files created during compilation. |
| `make fclean` | Removes all object files **and** deletes the `libft.a` library. |
| `make re` | Performs a full rebuild by running `fclean` followed by `make`. |
| `make all` | Same as `make`, compiles the mandatory part of the project. |
