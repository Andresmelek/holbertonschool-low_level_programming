#!/usr/bin/python3
"""
Finds the perimeter of an island
"""


def island_perimeter(grid):
    "Function that  that returns the perimeter of the island "
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                count += check_ones(i, j, grid)
    return count


def check_ones(i, j, grid):
    count = 0
    width = len(grid[0]) - 1
    height = len(grid) - 1
    if i - 1 < 0 or grid[i - 1][j] == 0:
        count += 1
    if i + 1 > height or grid[i + 1][j] == 0:
        count += 1
    if j + 1 > width or grid[i][j + 1] == 0:
        count += 1
    if j - 1 < 0 or grid[i][j - 1] == 0:
        count += 1
    return count
