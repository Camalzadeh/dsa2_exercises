# Max-Heap Implementation (Exercise)

This folder contains a complete implementation of a Max-Heap data structure in C. This implementation was developed as part of a DSA exercise based on the requirements in the `heap-students` library.

## Files
- `heap.h`: Header file defining the heap interface.
- `heap.c`: Core implementation of the heap (max-heapify, build, extract, sort).
- `main.c`: Test program demonstrating the heap operations.
- `Makefile`: Build script for the project.

## Implementation Details
The heap is implemented using a dynamic array structure:
- **Build Max-Heap**: O(n) complexity using the bottom-up approach.
- **Heapify**: O(log n) complexity for correcting violations.
- **Extract Max**: O(log n) complexity.
- **Heap Sort**: O(n log n) complexity.
