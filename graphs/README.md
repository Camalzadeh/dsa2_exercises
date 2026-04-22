# Graph Implementation (Exercise)

This folder contains an Adjacency List graph representation derived from a DSA exercise framework.

## Content Overview
- `graph.c`: Extended standard graph logic functions, including the addition of accurate edge removals.
- `graph-bfs.c`: Contains iterative queue-based traversal implementation finding shortest paths via unweighted edges.
- `graph-dfs.c`: Recursive exploration structure determining chronological discovery properties.
- `Makefile`: Script for streamlined multi-binary compilation. 

## Features Highlight
- **Graph Structural Deletion**: Handled via simple singly linked list traversal pointing reference skipping methodologies inside `graph_remove_edge()`. 
- **Graph Traversal Patterns**: Breadth-First-Search and Depth-First-Search utilizing specific array structures returning search attributes such as path tracking `predecessor`, visitation constraints `enum color` tracking, and step distances `d`.

## To execute
```powershell
make CC=gcc
./graph-main.exe
./graph-bfs.exe
./graph-dfs.exe
```
