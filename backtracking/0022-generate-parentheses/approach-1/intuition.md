# 22. Generate Parentheses — Approach 1: Memoized build-up with a set

[Problem](https://leetcode.com/problems/generate-parentheses/) · Medium

**Idea:** Every valid string of `n` pairs is either one pair wrapped around a valid string of `n - 1` pairs, `"(" + X + ")"`, or two smaller valid strings glued together, `A + B`. Build size `n` from smaller sizes and use a set to drop the duplicates that gluing creates.

**Steps**
1. Base case: `n = 1` gives `{"()"}`.
2. Wrap: for each string `c` of size `n - 1`, add `"(" + c + ")"`.
3. Glue: for each split `i` from `1` to `n / 2`, combine strings of size `n - i` and `i` in both orders.
4. Cache each size's set so it's computed once.

**Complexity:** Output-bound, roughly O(4^n / √n) strings of length `2n`, plus extra work for the duplicates the set throws away. Memory holds the sets for every size up to `n`.

**Remember:** The duplicates come from the same string being split in more than one place, for example `()()()`. That's why a set is needed here and why approach 2 is cleaner.
