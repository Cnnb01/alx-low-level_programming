# Doubly Linked Lists in C

## Introduction

This project demonstrates the implementation of Doubly Linked Lists in the C programming language. Doubly Linked Lists are a type of linked list where each node contains a data part and two pointers, one pointing to the previous node and the other pointing to the next node.

## Files

1. **0-print_dlistint.c**: Function that prints all the elements of a doubly linked list.
2. **1-dlistint_len.c**: Function that returns the number of elements in a doubly linked list.
3. **2-add_dnodeint.c**: Function that adds a new node at the beginning of a doubly linked list.
4. **3-add_dnodeint_end.c**: Function that adds a new node at the end of a doubly linked list.
5. **4-free_dlistint.c**: Function that frees a doubly linked list.
6. **5-get_dnodeint.c**: Function that returns the nth node of a doubly linked list.
7. **6-sum_dlistint.c**: Function that returns the sum of all the data (n) of a doubly linked list.
8. **7-insert_dnodeint.c**: Function that inserts a new node at a given position.
9. **8-delete_dnodeint.c**: Function that deletes a node at a given position.

## Usage

To use these functions, you can include the corresponding header file in your C program:

```c
#include "lists.h"
```

Compile your program with the provided files:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o your_program
```

Ensure to include the necessary header files in your C file and then use the functions accordingly.

## Example

```c
#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t *list = NULL;

    add_dnodeint(&list, 5);
    add_dnodeint(&list, 10);
    add_dnodeint(&list, 15);

    printf("Number of elements: %d\n", dlistint_len(list));

    return 0;
}
```

This example creates a doubly linked list with three nodes and prints the number of elements in the list.
