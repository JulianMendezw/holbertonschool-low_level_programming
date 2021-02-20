#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Return the perimeter of the island """

    rows, columns, perimeter = len(grid), len(grid[0]), 0
    for row in range(rows):
        for spot in range(columns):
            if grid[row][spot] == 0:
                continue
            if row == 0 or grid[row - 1][spot] == 0:
                perimeter += 1
            if row == rows - 1 or grid[row + 1][spot] == 0:
                perimeter += 1
            if spot == 0 or grid[row][spot - 1] == 0:
                perimeter += 1
            if spot == columns - 1 or grid[row][spot + 1] == 0:
                perimeter += 1
    return perimeter
