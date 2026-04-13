# DSA Exercises

Welcome to the data structures and algorithms project repository. This root directory contains multiple implementation tasks and benchmarking tools for evaluation.

## Task Navigation

### 1. Dictionaries (Linked Lists and BSTs)
This task implements `dict.h` interface using simple lists, optimized lists, and Binary Search Trees.
- **Source Code:** `./dictionaries_ex` (root files)
- **Library/Student Files:** `./dict-students/`

### 2. Hash Maps (Polynomial Rolling Hash & Open Addressing)
This task focuses on implementing robust hash functions and a collision-free hash table using open addressing with a family of polynomial bases.
- **Source Code & Jobs:** `./hash_map/`
- **Library Files:** `./hash_map/hashmap-students/`

### 3. Heaps (Max-Heap & Heap Sort)
Implementation of a Max-Heap data structure with tree navigation, heapify operations, and Heap-Sort algorithm.
- **Source Code:** `./heap/`
- **Library Files:** `./heap/heap-students/`

## Overall Compilation

Each directory contains its own `Makefile`. To compile each task, navigate to its respective directory and run `make`. 

Recommended compiler is `gcc`. If your system's default `cc` is not `gcc`, please use:
```bash
make CC=gcc
```
