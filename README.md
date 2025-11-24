# ft_printf

Re-implementation of the famous `printf()` function from the C standard library.
This project introduces **variadic functions**, formatting rules, and clean modular code architecture — essential foundations for future C projects.

---

## 📌 Introduction

The goal of this project is to code a custom version of `printf()` called **ft_printf()**, mimicking the behavior of the original function while following strict constraints.
This project teaches:

* Handling **variadic arguments**
* Structuring a **clean, extensible codebase**
* Working with different **format specifiers**
* Creating and using a **static library**

Once validated, ft_printf can be added to your **libft** for future use.


---

## 🛠️ Mandatory Requirements

### Allowed functions

* `malloc`, `free`, `write`
* `va_start`, `va_arg`, `va_copy`, `va_end`


### Prototype

```c
int ft_printf(const char *format, ...);
```

### Required behavior

You must support the following **conversions**:

* `%c` – character
* `%s` – string
* `%p` – pointer (hexadecimal format)
* `%d` – signed decimal
* `%i` – signed integer
* `%u` – unsigned decimal
* `%x` – hexadecimal (lowercase)
* `%X` – hexadecimal (uppercase)
* `%%` – percent sign


### Constraints

* No buffer management like the real printf
* Must create a `libftprintf.a` static library at the root using `ar` (not libtool)


---

## 📁 Project Structure

Example recommended structure:

```
ft_printf/
│── Makefile
│── ft_printf.h
│── ft_printf.c
│── sources/
│   ├── ft_print_char.c
│   ├── ft_print_string.c
│   ├── ft_print_pointer.c
│   ├── ft_print_number.c
│   ├── ft_print_unsigned.c
│   ├── ft_print_hex.c
│   └── utils.c
│── libft/ (optional if used)
```

---

## 🚀 Usage

### Compilation

```bash
make
```

This produces:

```
libftprintf.a
```

### Using in your own code

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello %s\n", "world");
    return 0;
}
```

Compile with:

```bash
cc main.c libftprintf.a
```

---

## ⭐ Bonus Part (Optional)

If the **mandatory part is perfect**, you may add:

### Additional flags

* `-`
* `0`
* `.`
* minimum field width
* `# +` (including space)


It’s recommended to plan your architecture early if you want to attempt bonuses.

---

## 🧪 Peer-Evaluation

During defense:

* You may be asked to modify or add a few lines to test your understanding
* Your repository is the only reference point — double-check filenames


---

## 📚 About AI & Learning (from the subject)

The project emphasizes:

* Building real foundations
* Avoiding shortcuts from AI
* Learning reasoning + peer-to-peer method
