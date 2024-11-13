# Rush 01

## Description

Rush 01 is a C program that solves the problem of positioning boxes of sizes ranging from 1 to 4 on a 4x4 map, adhering to the visibility conditions provided. Each row and column must display the correct number of boxes according to the visibility rules.

## Requirements

- Compiler: `gcc`
- Authorized functions: `write`, `malloc`, `free`

## Compilation

To compile the program, run the following command in the terminal:

```bash
cc -Wall -Wextra -Werror -o rush-01 *.c
```

## Execution

The program should be executed with the following parameters:

```bash
./rush-01 "col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"
```
## Example

To run the program and view the solution, use the following command:

```bash
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e
```
### Expected Output

The output will be:

```bash
1 2 3 4$
2 3 4 1$
3 4 1 2$
4 1 2 3$
```

## Errors

```bash
Error$
```
If there is an error during execution, the program will return:


## Project Structure

- `*.c`: All source code files.
- `Makefile`: (optional) to facilitate compilation.
- `README.md`: This file.

## Contribution

Feel free to contribute improvements or fixes! You can submit pull requests or report issues in the project.

## License

This project is in the public domain and can be used and modified freely.
