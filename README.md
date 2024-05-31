# Libft

`libft` is a 42 School project that involves creating your own C library, replicating standard libc functions as well as other utility functions that can be used in future projects.

## Overview

The goal of `libft` is to create a comprehensive set of functions that will be useful for your upcoming projects at 42. This project helps you understand the concepts of C programming, such as memory allocation, manipulation, and data structures.

## Features

- Recoded functions from the standard C library (`libc`).
- Additional utility functions to manipulate strings, memory, and linked lists.
- Functions are prefixed with `ft_` to distinguish them from their standard C counterparts.

## How to Use

1. Clone the repository to your local machine:
   ```bash
   git clone git@github.com:cchadili10/libft.git

## Compile the library:
```make```

## Include the libft.h header file in your C projects and compile with the library:
```#include "libft.h"```
```
gcc -Wall -Wextra -Werror -I. -c your_c_files.c
gcc -o your_program your_c_files.o -L. -lft
```
## Example
Here’s an example of how to use a function from the library:
```
#include "libft.h"

int main(void)
{
    char *str;

    str = ft_strdup("42 is amazing!");
    puts(str);
    return (0);
}
```

## Contributors
hamza chadili
