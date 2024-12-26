# Conway's Game of Life
A C++ implementation of Conway's Game of Life, featuring a dynamic grid and ANSI escape sequences for a terminal visualization.

## About
Conway's Game of Life simulates the evolution of a grid of cells based on the following rules:
1. Any live cell with two or three live neighbors survives.
2. Any dead cell with exactly three live neighbors becomes a live cell.
3. All other live cells die in the next generation, and all other dead cells stay dead.

## Features
- The grid is 23x79 cells long
- The outer layer of cells are defined as dead cells
- Press return key to see the next grid of the process

## Compilation
Compile the project using the following command:
```bash
g++ -o main.exe main.cc grid.cc cell.cc
```

## Execution
Run the program using:
```bash
.\main.exe
```
