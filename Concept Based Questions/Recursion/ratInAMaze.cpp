#include <iostream>
#include <vector>
using namespace std;

bool isMovementSafe(int maze[][3], int row, int col, int x, int y, vector<vector<bool>> &visitedTable) {
    if(x >=0 && x<row && y>=0 && y<col && maze[x][y] && !visitedTable[x][y])
        return true;
    else
        return false;
}

void solveMaze(int maze[][3], int row, int col, int x, int y, int destX, int destY, vector<vector<bool>> &visitedTable, string &output) {
    if(x==destX-1 && y==destY-1) {
        cout << output << endl;
        return;
    }

    //right
    if(isMovementSafe(maze, row, col, x, y + 1, visitedTable)) {
        output.push_back('R');
        visitedTable[x][y+1] = true;
        solveMaze(maze, row, col, x, y+1, destX, destY, visitedTable, output);
        output.pop_back();
        visitedTable[x][y+1] = false;
    }

    //left
    if(isMovementSafe(maze, row, col, x, y-1, visitedTable)) {
        output.push_back('L');
        visitedTable[x][y-1] = true;
        solveMaze(maze, row, col, x, y-1, destX, destY, visitedTable, output);
        output.pop_back();
        visitedTable[x][y-1] = false;
    }

    //top
    if(isMovementSafe(maze, row, col, x-1, y, visitedTable)) {
        output.push_back('T');
        visitedTable[x-1][y] = true;
        solveMaze(maze, row, col, x-1, y, destX, destY, visitedTable, output);
        output.pop_back();
        visitedTable[x-1][y] = false;
    }

    //bottom
    if(isMovementSafe(maze, row, col, x+1, y, visitedTable)) {
        output.push_back('B');
        visitedTable[x+1][y] = true;
        solveMaze(maze, row, col, x+1, y, destX, destY, visitedTable, output);
        output.pop_back();
        visitedTable[x+1][y] = false;
    }
}

int main() {
    int maze[3][3] = {
            {1, 1, 0},
            {1, 1, 1},
            {0, 1, 1},
    };
    int row = 3;
    int col = 3;
    string output = "";
    vector<vector<bool>> visitedTable(row, vector<bool>(col, false));
    if(!maze[0][0]) {
        cout << "Not possible";
        return 0;
    }else
     visitedTable[0][0] = true;
    solveMaze(maze, row, col, 0, 0, 3, 3, visitedTable, output);
    cout << output;
    return 0;
}