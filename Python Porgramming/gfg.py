def numIslands(grid):
    if not grid:
        return 0

    n, m = len(grid), len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]

    def dfs(i, j):
        if i < 0 or i >= n or j < 0 or j >= m or grid[i][j] == '0' or visited[i][j]:
            return
        visited[i][j] = True
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]
        for d in directions:
            dfs(i + d[0], j + d[1])

    count = 0
    for i in range(n):
        for j in range(m):
            if grid[i][j] == '1' and not visited[i][j]:
                dfs(i, j)
                count += 1

    return count

# Example usage:
grid1 = [['0', '1'], ['1', '0'], ['1', '1'], ['1', '0']]
grid2 = [['0', '1', '1', '1', '0', '0', '0'], ['0', '0', '1', '1', '0', '1', '0']]
print(numIslands(grid1))  # Output: 1
print(numIslands(grid2))  # Output: 2