# Hash Table Implementation in C

## Overview

This repository contains code implementing a hash table data structure in the C programming language. The hash table uses a chaining collision handling strategy and consists of nodes linked together to efficiently store and retrieve key-value pairs.

## Table of Contents

1. [Node Structure](#node-structure)
2. [Hash Table Structure](#hash-table-structure)
3. [How to Use](#how-to-use)
4. [Example Code](#example-code)
5. [Contributing](#contributing)

## Node Structure

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;
```

The `hash_node_t` structure represents a node in the hash table. Each node contains a key (a unique string), a corresponding value, and a pointer to the next node in the linked list.

## Hash Table Structure

```c
/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

The `hash_table_t` structure represents the entire hash table. It includes the size of the array and an array of pointers to the first nodes of linked lists. The array size is determined by the variable `size`, and each cell in the array points to the first node of a linked list, facilitating the chaining collision handling strategy.

## How to Use

To use this hash table implementation in your project:

1. Clone the repository: `git clone https://github.com/your-username/hash-table-c.git`
2. Include the necessary files in your project.
3. Create a hash table using the provided structures.
4. Customize the code based on your specific requirements.

## Example Code

The repository includes example code (`example.c`) that demonstrates the basic usage of the hash table, including inserting, retrieving, and deleting key-value pairs.

## Contributing

Contributions are welcome! If you find issues or have suggestions for improvements, please open an issue or submit a pull request.
