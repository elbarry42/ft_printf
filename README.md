# ft_printf – Custom printf implementation

Welcome to **ft_printf** 🔧
This project is a custom reimplementation of the standard C library function `printf()`, developed as part of the **42 curriculum**.

The goal is to reproduce the core behavior of `printf` while respecting strict constraints, using **variadic functions** and without relying on the original C library implementation.

---

## 📝 Project Overview

**ft_printf** recreates formatted output handling in C.
It processes format strings, handles variable arguments, and prints formatted data directly to standard output using `write()`.

Once validated, this library can be reused in future 42 projects or integrated into **libft**.

---

## 🔧 Supported Conversions (Mandatory Part)

The following format specifiers are implemented:

* `%c` → Print a single character
* `%s` → Print a string
* `%p` → Print a pointer in hexadecimal format
* `%d` → Print a signed decimal number
* `%i` → Print a signed integer
* `%u` → Print an unsigned decimal number
* `%x` → Print a hexadecimal number (lowercase)
* `%X` → Print a hexadecimal number (uppercase)
* `%%` → Print a literal percent sign

All conversions behave like the original `printf()`.

---

## 📂 Project Structure

```
ft_printf/
│── Makefile
│── ft_printf.h
│── ft_printf.c
│── ft_putstrings.c
│── ft_putnbrs.c
│── ft_putptr.c
```

* `ft_printf.c` handles parsing and variadic arguments
* Helper files manage strings, numbers, hexadecimals, and pointers

---

## 🛠️ Compilation

Compile the static library using:

```bash
make
```

This generates:

```bash
libftprintf.a
```

Available Makefile rules:

```bash
make
make clean
make fclean
make re
```

The Makefile uses `cc` with `-Wall -Wextra -Werror` and avoids unnecessary relinking.

---

## 🚀 Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return (0);
}
```

Compile with:

```bash
cc main.c libftprintf.a
```

---

## ⚙️ Implementation Details

* Uses **variadic functions** (`va_list`, `va_arg`, `va_start`, `va_end`)
* Direct output with `write()` (no buffering)
* Recursive helpers for numeric conversions
* `%p` prints pointers in hexadecimal with the `0x` prefix
* Every function returns the number of printed characters

---

## 🚀 Bonus Part

Bonus features such as flags (`-`, `0`, `.`, width, `#`, `+`, space) are **not implemented**.
This project focuses on a **fully correct mandatory part**, as required for validation.

---

## 🎯 Learning Outcomes

Through this project, I learned to:

* Work with **variadic arguments** in C
* Reproduce standard library behavior
* Manage formatted output manually
* Build and use static libraries
* Write clean, modular, and norm-compliant code

---

## 📚 Resources

* `man printf`
* GNU C Library documentation
* `stdarg.h` (variadic functions)

---

## 🛡️ License

This project was developed for educational purposes as part of the **42 curriculum**.
Free to explore, study, and improve.

---

✨ Thanks for checking out my **ft_printf** project!
