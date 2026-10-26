# Matrix Operations in C

A menu-driven C program to perform basic matrix operations using two-dimensional arrays and functions.

## Features

- Matrix Addition
- Matrix Multiplication
- Transpose of the First Matrix
- Input validation for matrix dimensions (1 to 10)
- Menu-driven interface
- Modular programming using functions

## Technologies Used

- C Programming Language
- Standard Input/Output Library (`stdio.h`)
- Two-dimensional arrays
- Functions, loops, and switch-case statements

## Requirements

- A C compiler, such as GCC
- A terminal or command prompt

## How to Run

### 1. Save the Source Code

Save the program in a file named `matrix_operations.c`.

### 2. Compile the Program

```bash
gcc matrix_operations.c -o matrix_operations
```

### 3. Run the Program

On Linux or macOS:

```bash
./matrix_operations
```

On Windows:

```bash
matrix_operations.exe
```

## Usage

1. Enter the number of rows and columns for the first matrix.
2. Enter the number of rows and columns for the second matrix.
3. Enter the elements of both matrices.
4. Select an operation from the menu:
   - `1` - Matrix Addition
   - `2` - Matrix Multiplication
   - `3` - Transpose of the First Matrix
5. View the result displayed on the screen.

## Example

### Input

```text
Enter rows and columns of first matrix: 2 2
Enter rows and columns of second matrix: 2 2

Enter elements of first matrix:
1 2
3 4

Enter elements of second matrix:
5 6
7 8

1. Matrix Addition
2. Matrix Multiplication
3. Transpose of First Matrix
Enter your choice: 1
```

### Output

```text
Matrix Addition:
6 8
10 12
```

## Matrix Operations

### 1. Matrix Addition

Adds two matrices of the same dimensions by adding their corresponding elements. Addition is possible only when both matrices have the same number of rows and columns.

### 2. Matrix Multiplication

Multiplies two matrices when the number of columns in the first matrix equals the number of rows in the second matrix. If the first matrix has dimensions `r1 x c1` and the second has dimensions `r2 x c2`, the result has dimensions `r1 x c2`, provided that `c1 == r2`.

### 3. Matrix Transpose

Converts the rows of the first matrix into columns and its columns into rows. A matrix with dimensions `r x c` has a transpose with dimensions `c x r`.

## Constraints and Limitations

- Maximum supported matrix size: `10 x 10`.
- Matrix addition requires identical dimensions.
- Matrix multiplication requires compatible dimensions.
- Transpose is performed only on the first matrix.
- Only one operation is performed per execution.
- The program expects valid integer input.

## Future Improvements

- Add matrix subtraction.
- Support transpose of the second matrix.
- Allow multiple operations in one execution.
- Improve input validation for non-integer input.
- Add more matrix operations.

## License

This project is available for educational and personal use. You may modify and extend the code as needed.

## Author

SALMAN ANSARI

Created as a C programming project to demonstrate fundamental matrix operations using functions and two-dimensional arrays.
