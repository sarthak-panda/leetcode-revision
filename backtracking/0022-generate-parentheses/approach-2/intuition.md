# 22. Generate Parentheses — Approach 2: Closure number (Catalan split)

[Problem](https://leetcode.com/problems/generate-parentheses/) · Medium

**Idea:** Look at the first `(` and its matching `)`. Every valid string has the unique form `"(" + left + ")" + right`, where `left` has `k` pairs and `right` has `n - 1 - k`. Because that split is unique, no duplicates are ever produced.

**Steps**
1. Base case: `n = 0` returns `{""}`.
2. For `k` from `0` to `n - 1`, recursively get all strings of size `k` and of size `n - 1 - k`.
3. For every pair, add `"(" + left + ")" + right`.

**Complexity:** About O(4^n / √n) time for the output, since this is the Catalan recurrence C(n) = Σ C(k)·C(n-1-k). Recursion depth is O(n).

**Remember:** Without a cache, the same smaller sizes get recomputed many times. A memo keyed by `n` makes it faster in practice.
