#include "cell.h"

// Draw the cell on the grid
void cell::draw(int row, int col) const
{
  // escape[n;mH moves the cursor to row n, column m
  // Their enumeration starts with 1, therefore row 1 is the first row
  std::cout << "\x1b[" << row + 1 << ";" << col + 1 << "H";
  std::cout << (alive ? live_cell : dead_cell);
}
