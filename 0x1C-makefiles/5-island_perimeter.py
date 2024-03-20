#!/usr/bin/python3
"""
module that defines function to calculate perimeter
"""


def island_perimeter(grid):
    """
    returns perimeter of the island described in grid

    grid is a lists of list of integers where 1 is land and
    0 is water

    each grid cell(number in the list) is a square with side length of 1
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1
    return perimeter
