#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Return the perimeter of the island """

    perimeter = 0
    a = 0

    if (len(grid[a])) <= 100 and len(grid) <= 100:
        for line in range(len(grid)):
            for row in range(len(grid[line])):

                if grid[line][row] == 1:

                    if grid[line][row - 1] or grid[line][row - 1] == 0:
                        perimeter = perimeter + 1

                    if grid[line][row + 1] or grid[line][row + 1] == 0:
                        perimeter = perimeter + 1

                    if grid[line - 1][row] or grid[line - 1][row] == 0:
                        perimeter = perimeter + 1

                    if grid[line + 1][row] or grid[line + 1][row] == 0:
                        perimeter = perimeter + 1
    else:
        pass
    return perimeter
