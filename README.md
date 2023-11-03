# Basic C Calculator

This program is a basic implementation of a calculator in C.

It includes the following functions:

- `add(int a, int b)`
- `subtract(int a, int b)`
- `multiply(int a, int b)`
- `divide(int a, int b)`
- `mod(int a, int b)`

All functions receive two arguments and return an integer.

## Running the program

You will need to compile the program by running the following command:

`gcc -o calculator ./src/main.c ./src/calculatorlib.c -I`

This will create an executable called `calculator`. You can replace "calculator" with any desired name by editing the command.

After a successful compilation, you'll find an executable file in the home directory.

### On Linux and macOS:

Run the program with the following command:

`./calculator`

### On Windows:

Run the program with the following command:

`calculator.exe`
