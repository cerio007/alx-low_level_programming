#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    nrows = len(grid)

    if grid != []:
        ncolumns = len(grid[0])

    for x in range(nrows):
        for y in range(ncolumns):
            if grid[x][y] == 1:
                if (x - 1) == -1 or grid[x - 1][y] == 0:
                    perimeter += 1
                if (x + 1) == nrows or grid[x + 1][y] == 0:
                    perimeter += 1
                if (y - 1) == -1 or grid[x][y - 1] == 0:
                    perimeter += 1
                if (y + 1) == ncolumns or grid[x][y + 1] == 0:
                    perimeter += 1

    return perimeter
