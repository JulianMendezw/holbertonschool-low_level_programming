# 0x13. C - More singly linked lists

Foundations - Low-level programming & Algorithm ― Data structures and Algorithms

_by Julien Barbier, co-founder & CEO at Holberton School_

Ongoing project - started 11-03-2020, must end by 11-05-2020 (in 1 day) - you're done with  0% of tasks.

Checker will be released at 11-04-2020 12:00 AM

QA review fully automated.

## Resources

**Read or watch**:

-   [Google](https://intranet.hbtn.io/rltoken/VxmJXbHtjDMJAKj7dU-6sg "Google")
-   [Youtube](https://intranet.hbtn.io/rltoken/PqebvZ1ey95sB8eDiYl8_A "Youtube")

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/165o2edbvcnHqGsL_nB29w "explain to anyone"),  **without the help of Google**:

### General

-   How to use linked lists
-   Start to look for the right source of information without too much help

## Requirements

### General

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   The only C standard library functions allowed are  `malloc`,  `free`  and  `exit`. Any use of functions like  `printf`,  `puts`,  `calloc`,  `realloc`  etc… is forbidden
-   You are allowed to use  [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c "_putchar")
-   You don’t have to push  `_putchar.c`, we will use our file. If you do it won’t be taken into account
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions and the prototype of the function  `_putchar`  should be included in your header file called  `lists.h`
-   Don’t forget to push your header file
-   All your header files should be include guarded

## More Info

Please use this data structure for this project:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
