#include <iostream>
#include "sudoku.H"

int main(){
    input();
    cout << endl << endl; 
    dfs(0);
    output();
    return 0;
}