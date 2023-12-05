class Solution {
    public int countNegatives(int[][] grid) {
        int t=0;
        int n=grid.length;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<grid[i].length;j++)
            {
                if(grid[i][j]<0)
                {
                    t++;
                }
            }
        }
        return t;
    }
}

/*

[4,3,2,-1]
[3,2,1,-1]
[1,1,-1,-2]
[-1,-1,-2,-3]

*/