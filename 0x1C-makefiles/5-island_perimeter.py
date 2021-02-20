#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Return the perimeter of the island """

    perimeter = 0
    a = 0

    try:
        if len(grid) * len(grid[a]) <= 100:
            for line in range(len(grid)):
                for row in range(len(grid[line])):

                    if grid[line][row] == 1:

                        if grid[line][row - 1] == 0:  # Left
                            perimeter = perimeter + 1

                        if grid[line][row + 1] == 0:  # Right
                            perimeter = perimeter + 1

                        if grid[line - 1][row] == 0:  # Up
                            perimeter = perimeter + 1

                        if grid[line + 1][row] == 0:  # Below
                            perimeter = perimeter + 1

            return perimeter
    except BaseException:
        pass
