#!/usr/bin/python3
"""
Module for calculating the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list of list of int): A rectangular grid where
                                    0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Start with 4 sides
                perimeter += 4

                # Subtract 2 sides for every adjacent land cell
                if i > 0 and grid[i - 1][j] == 1:  # Check upward
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Check leftward
                    perimeter -= 2

    return perimeter
