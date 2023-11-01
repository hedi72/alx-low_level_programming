!/usr/bin/python3
"""
    Contains the definition of the island_perimeter function that returns the
    perimeter of the island described in 'grid'.

"""


def island_perimeter(grid):
    """Returns the perimeter of the island as described by a grid.

    """
    
    perimeter = 0
    for idx, val in enumerate(grid):
        for idx2, val2 in enumerate(val):
            if grid[idx][idx2] == 1:
                perimeter += 4
                if idx != len(grid) - 1:
                    if grid[idx + 1][idx2] == 1:
                        perimeter -= 1
                if idx2 != len(val) - 1:
                    if grid[idx][idx2 + 1] == 1:
                        perimeter -= 1
                if idx != 0:
                    if grid[idx - 1][idx2] == 1:
                        perimeter -= 1
                if idx2 != 0:
                    if grid[idx][idx2 - 1] == 1:
                        perimeter -= 1
    return perimeter
