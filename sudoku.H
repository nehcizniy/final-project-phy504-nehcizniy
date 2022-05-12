#ifndef SUDOKU_H
#define SUDOKU_H

#include <iostream>

using namespace std;

int grid[9][9];
bool flag = false;

void input(){
    char t;
    cout << "Input the sudoku problem, use 0 for empty boxes:\n";
    for(int i = 0; i < 9; i ++){
        for(int j = 0; j < 9; j ++){
            cin >> t;
            grid[i][j] = t - '0';
        }
    }
}

void output(){
    for(int i = 0; i < 9; i ++){
        for(int j = 0; j < 9; j ++){
            if(grid[i][j]){
                cout << grid[i][j];    
            }
            else{
                cout << " ";
            }
            if(j%3 == 2) cout << "  ";
        }
        if(i%3 == 2) cout << endl;
        cout << endl;
    }
}

bool check(int n, int num){
    for(int i = 0; i < 9; i ++){
        if(grid[n/9][i] == num){
            return false;
        }
    }

    for(int i = 0; i < 9; i ++){
        if(grid[i][n%9] == num){
            return false;
        }
    }

    int x = n / 9 / 3 * 3;
    int y = n % 9 / 3 * 3;
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j ++){
            if(grid[x+i][y+j] == num){
                return false;
            }
        }
    }

    return true;
}

void dfs(int n){ 
    if(n > 80){
        flag = true;
        return;
    }
    int x = n/9, y = n%9;
    if(grid[x][y]){
        dfs(n+1);
        return;
    }
    for(int i = 1; i <= 9; i ++){
        if(check(n, i)){
            grid[x][y] = i;
            dfs(n+1);
            if(flag){
                return;
            }
            grid[x][y] = 0;
        }
    }
}

#endif