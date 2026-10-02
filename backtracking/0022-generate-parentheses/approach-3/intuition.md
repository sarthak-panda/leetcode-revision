# 22. Generate Parentheses — Approach 3: Backtracking with open/close counts

[Problem](https://leetcode.com/problems/generate-parentheses/) · Medium

**Idea:** Build the string one character at a time and only make moves that can still lead to a valid answer. You may add `(` while you have fewer than `n` opens, and `)` only while it would close an unmatched `(`.

**Steps**
1. Track `open` and `close` counts in a shared string `current`.
2. If `current` has length `2n`, save it.
3. If `open < n`, push `(`, recurse, pop.
4. If `close < open`, push `)`, recurse, pop.

**Complexity:** O(4^n / √n) valid strings, each costing O(n) to copy, so about O(4^n / √n · n) time. O(n) extra space for the recursion and `current`.

**Remember:** The rule `close < open` is what keeps every prefix valid, so no final validity check is needed. This is the go-to answer in interviews.
