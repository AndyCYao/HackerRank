nclude <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int dfs(vector< vector<int> > grid, 
        int row, int col,
        int maxRow, int maxCol){
    //make sure current coordinate is not out of bound
    if(row < 0 || row >= maxRow || col < 0 || col >= maxCol){
        return 0;
    }
    else if(grid[row][col] == 0){
        return 0;
    }
    
    return dfs(grid, row - 1, col - 1, maxRow, maxCol) +
           dfs(grid, row - 1, col, maxRow, maxCol) +
           dfs(grid, row - 1, col + 1, maxRow, maxCol) +
           dfs(grid, row, col - 1, maxRow, maxCol) +
           dfs(grid, row, col + 1, maxRow, maxCol) +
           dfs(grid, row + 1, col - 1, maxRow, maxCol) +
           dfs(grid, row + 1, col, maxRow, maxCol) +
           dfs(grid, row + 1, col + 1, maxRow, maxCol) + 1;
}

int get_biggest_region(vector< vector<int> > grid) {
    int maxRow =  grid.size();
    int maxCol =  grid[0].size();
    return dfs(grid, 0, 0, maxRow, maxCol);
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    vector< vector<int> > grid(n,vector<int>(m));
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid) << endl;
    return 0;
}

