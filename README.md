# _printf
A tiny implementation of the built-in printf funtion. The function `_printf` currently handles the following conversion specifiers:

| Symbol | Operation |
|--|--|
| `c` | Prints character |
| `s` | Prints string |
| `%` | Prints percent sign |
| `d` | Prints an integer |
| `i` | Prints an integer |
| `b` | Prints a binary |
| `u` | Prints an unsigned integer |
| `o` | Prints an octal number |
| `x` | Converts from decimal and prints lowercase hexadecimal |
| `X` | Converts from decimal and prints upper hexadecimal |
| `S` | Prints Non printable characters this way: \x, followed by the ASCII code value in hexadecimal |
| `p` | Prints a pointer (address) in hex |
| `r` | prints a string in reverse|
| `R` | Encodes and prints string using `rot13` |

## Getting Started
Quick start guide of `printf`.

### 1. Install
Run the following commands:
```
$ git clone https://github.com/Koderua/printf.git
```

```
cd printf
```

### 2. main.c
```
touch main.c
```

paste this in `main.c` file to compile it with. Go ahead and try the following:
```
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n", "hello);
    printf("Unknown:[%r]\n");
    return (0);
}
```

### 3. Compile
Use the following command to compile
```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

### 4. Run the binary
Going along with our sample code above, you would hopefully see this output:
```
$ ./a.out
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%olleh]
Unknown:[%r]
$
```

## Environment Information
| Aspect | Version |
|--|--|
| **Language** | C |
| **Operating System** | Ubuntu 14.04 LTS |
| **Compiler** | `gcc 4.8.4` |
| **Style Guidelines** | [`Betty`](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") |

## Project Requirements
-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded
-   Authorized functions and macros:
    -   `write`  (`man 2 write`)
    -   `malloc`  (`man 3 malloc`)
    -   `free`  (`man 3 free`)
    -   `va_start`  (`man 3 va_start`)
    -   `va_end`  (`man 3 va_end`)
    -   `va_copy`  (`man 3 va_copy`)
    -   `va_arg`  (`man 3 va_arg`)
-   Note that we will not provide the  `_putchar`  function for this project

## Future Todos
- Use a local buffer of 1024 chars in order to call write as little as possible.
- Handle the following flag characters for non-custom conversion specifiers:
   - '+'
   - space
   - '#'
- Handle the following length modifiers for non-custom conversion specifiers:
     - l
     - h
   - Conversion specifiers to handle: d, i, u, o, x, X
- Handle the field width for non-custom conversion specifiers.
- Handle the precision for non-custom conversion specifiers.
- Handle the 0 flag character for non-custom conversion specifiers.
- Handle the - flag character for non-custom conversion specifiers.

### Authors

- **Kibi**
- **Dev**