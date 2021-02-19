#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island"""
    burger = len(grid)
    beer = len(grid[0])
    beerburger = 0

    if burger == 0 or beer == 0:
        return beerburger
    for i in range(burger):
        for j in range(beer):
            if grid[i][j] == 1:
                if i - 1 < 0 or grid[i - 1][j] == 0:
                    beerburger += 1
                if i + 1 == burger or grid[i + 1][j] == 0:
                    beerburger += 1
                if j - 1 < 0 or grid[i][j - 1] == 0:
                    beerburger += 1
                if j + 1 == beer or grid[i][j + 1] == 0:
                    beerburger += 1
    return beerburger
