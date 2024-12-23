#include "grid.h"

int main()
{
    std::cout << "Conway's game of Life\n";
    std::cout << "Press the return key to display the following generation\n";

    // Wait for user to press the return key
    std::cin.get();

    // Grid for the first generation
    grid current_generation;

    // Populate the cells at random
    current_generation.randomize();

    while (true)
    {
        // Draw the current generation
        current_generation.draw();

        // Wait for user to press the return key
        std::cin.get();

        // Grid for the next generation
        grid next_generation;

        // Populate the cells in the next generation
        calculate(current_generation, next_generation);

        // Update to the next generation
        current_generation.update(next_generation);
    }

    // Move cursor to bottom of screen
    std::cout << "\x1b[" << 0 << ";" << rowmax - 1 << "H";
}
