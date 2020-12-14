
# 0x18. C - Dynamic libraries

Foundations - Low-level programming & Algorithm ― Hatching out

_by Julien Barbier, co-founder & CEO at Holberton School_

Ongoing project - started 12-14-2020, must end by 12-15-2020 (in about 11 hours) - you're done with  0% of tasks.

Checker was released at 12-14-2020 12:00 PM

**Manual QA review must be done**  (request it when you are done with the project)

QA review fully automated.

## Resources

**Read or watch**:

-   [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://intranet.hbtn.io/rltoken/FrHmqtTW-frrOt0yf2blOw "What is difference between Dynamic and Static library (Static and Dynamic linking)")
-   [create dynamic libraries on Linux](https://intranet.hbtn.io/rltoken/Zj0XtgNWUQyEYuABr47p8Q "create dynamic libraries on Linux")
-   [Technical Writing](https://intranet.hbtn.io/rltoken/NnmQ5eohod3BpT3r0cFlRA "Technical Writing")

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/vsgqW2DzSR14Zrmwddgc2A "explain to anyone"),  **without the help of Google**:

### General

-   What is a dynamic library, how does it work, how to create one, and how to use it
-   What is the environment variable  `$LD_LIBRARY_PATH`  and how to use it
-   What are the differences between static and shared libraries
-   Basic usage  `nm`,  `ldd`,  `ldconfig`

## Requirements

### C

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   You are not allowed to use the standard library. Any use of functions like  `printf`,  `puts`, etc… is forbidden
-   You are allowed to use  [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push  `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function  `_putchar`  should be included in your header file called  `holberton.h`
-   Don’t forget to push your header file

### Bash

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your scripts will be tested on Ubuntu 14.04 LTS
-   All your files should end with a new line ([why?](http://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789))
-   The first line of all your files should be exactly  `#!/bin/bash`
-   A  `README.md`  file, at the root of the folder of the project, describing what each script is doing
-   All your files must be executable
