#include <iostream>
#include "sudoku.H"
#include <cassert>

int main(){
    int grid_difference[9][9];
    int grid[9][9] = {
        {0,8,0,0,1,0,0,4,7},
        {0,0,1,5,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,2},
        {0,6,0,0,0,0,5,0,0},
        {0,0,0,0,4,0,2,0,0},
        {7,0,0,9,0,0,0,6,4},
        {0,7,0,0,5,0,0,8,1},
        {0,0,0,0,0,0,6,0,0},
        {9,0,0,0,0,3,0,0,0}
    };

    dfs(0);
    output();

    int target[9][9] = {
        {5,8,6,3,1,2,9,4,7},
        {2,4,1,5,9,7,8,3,6},
        {3,9,7,4,8,6,1,5,2},
        {4,6,2,7,3,8,5,1,9},
        {1,3,9,6,4,5,2,7,8},
        {7,5,8,9,2,1,3,6,4},
        {6,7,3,2,5,9,4,8,1},
        {8,2,5,1,7,4,6,9,3},
        {9,1,4,8,6,3,7,2,5}
    };
    int sumofdifference = 0;
    for(int i = 0; i < 9; i ++){
        for(int j = 0; j < 9; j ++){
            if(grid[i][j]){
                sumofdifference += (target[i][j] != grid[i][j]);
            }
        }
    }

    int N = 0;
    std::cout << "testing an example sudoku" << std::endl;
std::cout << sumofdifference << std::endl;

    assert(sumofdifference == N);
    std::cout << "test passed" << std::endl;
}