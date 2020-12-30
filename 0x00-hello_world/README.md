# 0x00. C - Hello, World

Foundations - Low-level programming & Algorithm ― Hatching out

_by Julien Barbier, co-founder & CEO at Holberton School_

_weight: 1_

Manual QA review was done by Jorge Morales on 09-23-2020.

[](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg)

## Resources

**Read or watch**:

-   [Everything you need to know to start with C](https://intranet.hbtn.io/rltoken/JgP0ALD8CNZM19FLZQetMQ "Everything you need to know to start with C")  (_You do not have to learn everything in there yet, but make sure you read it entirely first_)
-   [Dennis Ritchie](https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA "Dennis Ritchie")
-   [“C” Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw ""C" Programming Language: Brian Kernighan")
-   [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw "Why C Programming Is Awesome")
-   [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg "Learning to program in C part 1")
-   [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA "Learning to program in C part 2")
-   [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg "Understanding C program Compilation Process")
-   [Holberton’s Betty Coding Style](https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw "Holberton's Betty Coding Style")
-   [Hash-bang under the hood](https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q "Hash-bang under the hood")  (_Look at only after you finish consuming the other resources_)
-   [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw "Linus Torvalds on C vs. C++")  (_Look at only after you finish consuming the other resources_)

**man or help**:

-   `gcc`
-   `printf (3)`
-   `puts`
-   `putchar`

## Learning Objectives

At the end of this project, you are expected to be able to  [explain to anyone](https://intranet.hbtn.io/rltoken/teQx0X6TSmGDa2BoA84WRg "explain to anyone"),  **without the help of Google**:

### General

-   Why C programming is awesome
-   Who invented C
-   Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
-   What happens when you type  `gcc main.c`
-   What is an entry point
-   What is  `main`
-   How to print text using  `printf`,  `puts`  and  `putchar`
-   How to get the size of a specific type using the unary operator  `sizeof`
-   How to compile using  `gcc`
-   What is the default program name when compiling with  `gcc`
-   What is the official Holberton C coding style and how to check your code with  `betty-style`
-   How to find the right header to include in your source code when using a standard library function
-   How does the  `main`  function influence the return value of the program

## Requirements

### C

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS using  `gcc 4.8.4`
-   All your files should end with a new line
-   A  `README.md`  file at the root of the  `holbertonschool-low_level_programming`  repo, containing a description of the repository
-   A  `README.md`  file, at the root of the folder of  _this_  project, containing a description of the project
-   There should be no errors and no warnings during compilation
-   You are not allowed to use  `system`
-   Your code should use the  `Betty`  style. It will be checked using  [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl")  and  [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")

### Shell Scripts

-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your scripts will be tested on Ubuntu 14.04 LTS
-   All your scripts should be exactly two lines long (`$ wc -l file`  should print 2)
-   All your files should end with a new line
-   The first line of all your files should be exactly  `#!/bin/bash`

## More Info

### Betty linter

To run the Betty linter just with command  `betty <filename>`:

-   Go to the  [Betty](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ "Betty")  repository
-   Clone the  [repo](https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ "repo")  to your local machine
-   `cd`  into the Betty directory
-   Install the linter with  `sudo ./install.sh`
-   `emacs`  or  `vi`  a new file called  `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done

```

-   Once saved, exit file and change permissions to apply to all users with  `chmod a+x betty`
-   Move the  `betty`  file into  `/bin/`  directory or somewhere else in your  `$PATH`  with  `sudo mv betty /bin/`

You can now type  `betty <filename>`  to run the Betty linter!
