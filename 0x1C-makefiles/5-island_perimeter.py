#!/usr/bin/python3
""" Module for island perimeter function """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """

    full_perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 0:
                continue

            if i == 0 or grid[i - 1][j] == 0:
                full_perimeter += 1

            if j == 0 or grid[i][j - 1] == 0:
                full_perimeter += 1

            if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                full_perimeter += 1

            if i == len(grid) - 1 or grid[i + 1][j] == 0:
                full_perimeter += 1

    return full_perimeter
