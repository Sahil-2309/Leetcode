class Solution {
public:
    bool dfs(vector<vector<char>>& board, int i, int j, int p, string& word, vector<vector<int>>& vis) {
        if (p == word.length()) return 1;
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return 0;
        if (board[i][j] == word[p] && !vis[i][j]) {
            vis[i][j] = 1;
            bool f = dfs(board, i + 1, j, p + 1, word, vis) ||
                         dfs(board, i - 1, j, p + 1, word, vis) ||
                         dfs(board, i, j - 1, p + 1, word, vis) ||
                         dfs(board, i, j + 1, p + 1, word, vis);
            vis[i][j] = 0;
            return f;
        }
        return 0;
    }

    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0));
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (dfs(board, i, j, 0, word, vis)) {
                    return 1;
                }
            }
        }
        return 0;
    }
};
