class Solution
{
public:
    // we have to  store it insside a vector string
    vector<string> res;


    void solve(int i, int j, vector<vector<int>> &maze, string path, int n)
    {

        if (i < 0 || j < 0 || j >= n || i >= n || maze[i][j] == 0){
            return;
        }

        if (i == n - 1 && j == n - 1)  {
            res.push_back(path);
            return;
        }

        // right dir
        maze[i][j] = 0;

        // down
        path.push_back('D');
        solve(i + 1, j, maze, path, n);
        path.pop_back();

        path.push_back('L');
        solve(i, j - 1, maze, path, n);
        path.pop_back();

        // 'right' direction

        path.push_back('R');
        solve(i, j + 1, maze, path, n);
        path.pop_back();

        // final 'up'

        path.push_back('U');
        solve(i - 1, j, maze, path, n);
        path.pop_back();

        // updating the  maze
        maze[i][j] = 1; // while  we are returning  for  another  checking
    }

    vector<string> ratInMaze(vector<vector<int>> &maze)
    {
        string path = "";

        int size = maze.size();
        if (maze[0][0] == 0)
            return {};
        solve(0, 0, maze, path, size);
        return res;
    }
};
