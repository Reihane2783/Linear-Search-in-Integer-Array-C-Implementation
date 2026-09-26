# Dynamic Array and Linear Search in C

A C program that dynamically allocates an integer array, reads its elements, and searches for a target value using a linear search function.

## Overview

The program:

- Reads the size of an array from the user
- Dynamically allocates memory using `malloc()`
- Stores integer elements in the allocated array
- Displays the array
- Searches for a target integer
- Reports the index of the first matching element
- Displays `Not found.` if the target does not exist

## Method

Memory for the array is allocated dynamically:

```c
p = (int *)malloc(n * sizeof(int));
