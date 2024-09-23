class Solution {
 public:
  bool canMakeSquare(vector<vector<char>>& grid) {
    for(int i=0 ;i<2;i++)
      for(int j=0; j<2;j++) {
        int b= 0;
        int w= 0;
        for(int x=0;x<2;x++)
          for(int y=0;y<2;y++)
            if(grid[i+x][j+y]=='B')
              b++;
            else
              w++;
        if (b >= 3 || w>= 3)
          return true;
      }
    return false;
  }
};
