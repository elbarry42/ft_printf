# ft_printf – My custom printf implementation

<div align="center">

<a href="https://github.com/elbarry42/ft_printf">![42 Badge](https://github.com/elbarry42/elbarry42/blob/main/42_badges/ft_printfe.png)</a>

</div>

Welcome to **ft_printf**! 🔧 This project aims to rebuild the famous `printf` function from scratch.
It’s an opportunity to deepen your understanding of C, explore **variadic functions**, improve your code structure, and learn how real formatting engines work.

---

## 📝 Project Overview

**ft_printf** is a custom re-implementation of the standard `printf()` from the C library.
It supports essential format specifiers, handles variable argument lists, and outputs formatted data without using the original buffering system.

Once validated, the project can be added to your **libft** as a reusable library component for future C projects.


---

## 🔧 Supported Conversions

Your implementation must handle the following format specifiers:

* `%c` → Print a single character
* `%s` → Print a string
* `%p` → Print a pointer in hexadecimal format
* `%d`, `%i` → Print signed integers
* `%u` → Print unsigned integers
* `%x` → Print lowercase hexadecimal
* `%X` → Print uppercase hexadecimal
* `%%` → Print a literal percent sign


---

## 📂 Project Structure

A clean and modular architecture is recommended:

```
ft_printf/
│── Makefile
│── ft_printf.h
│── ft_printf.c
│── ft_putstrings.c
│── ft_putnbrs.c
├── ft_putptr.c
```

---

## 🛠️ Compilation & Usage

### Compile the library

```bash
make
```

This generates:

```
libftprintf.a
```

### Example usage

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello %s! Number: %d\n", "world", 42);
    return 0;
}
```

Compile with:

```bash
cc main.c libftprintf.a
```

---

## 🚀 Bonus Features (Optional)

If the mandatory part is **100% correct**, bonuses may be added:

### Bonus flags

* `-` (left alignment)
* `0` (zero padding)
* `.` (precision)
* minimum field width
* `# +` (including space)


It’s recommended to plan your architecture early if you intend to add these.

---

## 🎯 Learning Outcomes

Through this project, I learned to:

✅ Use **variadic functions** with `va_list` <br>
✅ Manage and format different data types <br>
✅ Structure modular and maintainable C code <br>
✅ Work with static libraries using `ar` <br>
✅ Respect strict project constraints and the 42 Norm

---

## 🤝 Contributions

This project was developed as part of my training at **42 Lyon**.
Feedback and suggestions are always welcome!

---

## 🛡️ License

Created for educational purposes within the 42 curriculum.
Feel free to explore, reuse, and improve it!

---

✨ Thanks for checking out my ft_printf project! 🚀
