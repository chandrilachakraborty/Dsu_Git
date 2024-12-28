#include <stdio.h>

#define N 4 // Size of the maze

// Function to print the solution matrix
void printSolution(int solution[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", solution[i][j]);
        }
        printf("\n");
    }
}

// Utility function to check if a move is valid
int isSafe(int maze[N][N], int x, int y) {
    // Check if (x, y) is within the maze and is a valid cell (i.e., not blocked)
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1);
}

// Solves the maze using backtracking
int solveMazeUtil(int maze[N][N], int x, int y, int solution[N][N]) {
    // If the destination (bottom-right) is reached, return 1
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) {
        solution[x][y] = 1;
        return 1;
    }

    // Check if maze[x][y] is a valid move
    if (isSafe(maze, x, y)) {
        // Mark x, y as part of the solution path
        solution[x][y] = 1;

        // Move forward in the x direction
        if (solveMazeUtil(maze, x + 1, y, solution))
            return 1;

        // If moving in the x direction doesn't give a solution,
        // move down in the y direction
        if (solveMazeUtil(maze, x, y + 1, solution))
            return 1;

        // If neither move works, backtrack: unmark x, y
        solution[x][y] = 0;
        return 0;
    }

    return 0;
}

// Function to solve the maze problem
int solveMaze(int maze[N][N]) {
    int solution[N][N] = {{0, 0, 0, 0},
                          {0, 0, 0, 0},
                          {0, 0, 0, 0},
                          {0, 0, 0, 0}};

    // Start solving from (0, 0)
    if (solveMazeUtil(maze, 0, 0, solution) == 0) {
        printf("No solution exists\n");
        return 0;
    }

    // Print the solution path
    printSolution(solution);
    return 1;
}

int main() {
    int maze[N][N] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {0, 1, 0, 0},
                      {1, 1, 1, 1}};

    solveMaze(maze);

    return 0;
}
