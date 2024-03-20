#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid
"""


def island_perimeter(grid):
    """
    Function to calculate the perimeter of an island in a grid

    Parameters:
    grid (list): list of list of integers where 0 represents
    a water zone and 1 represents a land zone

    Returns:
    int: The perimeter of the island
    """
    rows = len(grid)
    cols = len(grid[0])

    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1

    return perimeter
