<div id="header" align="center">
  <img src="https://media.giphy.com/media/QXJd9XVrgJuDFhhcOX/giphy.gif" width="200"/>
</div>

<h1 align="center">School 42 printf()</h1>

This repository contains all files for the __printf__ project from the School 42 Berlin cursus. The project aims to replicate the functionality of the [`printf()`](https://es.wikipedia.org/wiki/Printf) function from the `stdio.h` library.

<h2 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#index">Index</a>
	<span> · </span>
	<a href="#requirements">Requirements</a>
	<span> · </span>
	<a href="#instructions">Instructions</a>
	<span> · </span>
	<a href="#testing">Testing</a>
</h2>

## About
This project focuses on duplicating the behavior of the C function `printf()`. There is no need to implement the original function's buffer management. The implementation should handle the following parameter types:

- `char` type variables.
- `string` type variables.
- `int` type variables.
- `unsigned int` type variables.
- Hexadecimal `int` type variables (uppercase and lowercase).
- `pointer` type variables.

Further details can be found in the [subject of the project](https://github.com/mukhammadsiddiq/42Berlin_Guideline/blob/main/printf.es.subject.pdf).

## Index
- [Structure](#structure)
- [Formats](#formats)
	- [va_list](#va_list)
	- [Returning an integer](#returning-an-integer)
- [Auxiliary functions](#auxiliary-functions)

### Structure
The main challenge of this project is managing a variable number of parameters and ensuring that the `ft_printf()` function returns an `int`.

#### `va_list`
To manage a variable number of parameters, we use the macros `va_list`, `va_start`, `va_arg`, and `va_end`. The `ft_printf()` function calls the `print_param()` function when it encounters the `%` sign among the parameters, checks the next character in the format string, and calls the appropriate function to handle different variable types. The `<stdarg.h>` library is included in `ft_printf.h` to use these macros.

#### Returning an integer
To return the integer from `ft_printf()`, a pointer is passed to the format printing functions. This pointer tracks the number of characters printed before continuing with the string provided. Example:

```c
void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++; // Increment the counter with each character printed
}
