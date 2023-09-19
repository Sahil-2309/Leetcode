class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> wordSet(wordList.begin(), wordList.end());

        if (wordSet.find(endWord) == wordSet.end()) {
            return 0;
            }

        queue<pair<string, int>> q;
        q.push({beginWord, 1});

        while (!q.empty()) {
            string word = q.front().first;
            int lvl = q.front().second;
            q.pop();

            if (word == endWord) {
                return lvl;
            }

            for (int i = 0; i < word.length(); i++) {
                char c = word[i];

                for (char v = 'a'; v <= 'z'; v++) {
                    word[i] = v;

                    if (wordSet.find(word) != wordSet.end()) {
                        wordSet.erase(word);
                        q.push({word, lvl + 1});
                    }
                }
                word[i] = c;
            }
        }
        return 0;
    }
};
