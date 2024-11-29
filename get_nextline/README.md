<h1 align="center"> # 42 Common Core Curriculum / Circle 1 / #GetNextLine </h1>
<p align="center"><img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_get_next_line.png" alt="" width="800"></p>

> 
# 📜 get_next_line

A project from the 42 Common Core Curriculum focusing on implementing a function to read a line from a file descriptor, one line at a time. This project is an essential step in mastering memory management, file I/O, and string manipulation in C.

---

## 🛠️ Project Overview

**`get_next_line`** reads a line from a file descriptor until a newline (`\n`) character or end-of-file (EOF) is reached. The function preserves state between calls using static variables, making it possible to read the file sequentially across multiple function calls.

---

## 🧩 Key Features

- **File I/O Operations:**
  - `open()`, `read()`, `close()` for interacting with file descriptors.
- **Dynamic Memory Management:**
  - Allocating and freeing memory with `malloc()` and `free()`.
- **String Manipulation:**
  - Custom string functions (`ft_strjoin`, `ft_strchr`, `ft_substr`, etc.) to handle line concatenation, searching, and substring operations.
- **Static Variables:**
  - Used to maintain state between successive function calls for a seamless reading experience.

---

## 📂 Project Files

### **Header File: `get_next_line.h`**

```c
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

char    *get_next_line(int fd);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strdup(char *s);
size_t  ft_strlen(const char *str);

#endif
```

## 🛠️ Compilation with Makefile

This project includes a `Makefile` to simplify the build process. Below are the available targets and their usage:

### 🎯 Targets

- **`make` or `make all`**  
  Compiles all source files into object files (`.o`) and creates the static library `libftprintf.a`.

- **`make clean`**  
  Deletes all object files (`.o`) generated during the compilation process.

- **`make fclean`**  
  Deletes all object files (`.o`) and the static library `libftprintf.a`.

- **`make re`**  
  Cleans all files (using `fclean`) and then recompiles everything.

### 🧑‍💻 Usage

To use the `Makefile`, run the following commands in your terminal:

1. Compile the project and create the library:
   ```bash
   make

