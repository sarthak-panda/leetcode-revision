class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current;
        // Pre-allocate space to avoid reallocations during recursion
        current.reserve(2 * n); 
        backtrack(result, current, 0, 0, n);
        return result;
    }

private:
    void backtrack(vector<string>& result, string& current, int open, int close, int n) {
        // Base case: if the string reaches the maximum length, we've found a valid combination
        if (current.length() == n * 2) {
            result.push_back(current);
            return;
        }

        // Rule 1: We can add an open parenthesis if we haven't used all 'n' of them
        if (open < n) {
            current.push_back('(');
            backtrack(result, current, open + 1, close, n);
            current.pop_back(); // Undo the choice to explore other branches
        }

        // Rule 2: We can add a close parenthesis ONLY if there are unmatched open parentheses
        if (close < open) {
            current.push_back(')');
            backtrack(result, current, open, close + 1, n);
            current.pop_back(); // Undo the choice
        }
    }
};
