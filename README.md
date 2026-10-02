# LeetCode Revision

My LeetCode solutions, grouped by topic, with every approach kept side by side so they're quick to revise.

## Folder layout

```
<topic>/
  <lc-number>-<slug>/
    approach-1/
      code.<ext>        # the solution
      intuition.md      # short, skimmable notes: idea, steps, complexity
    approach-2/
      ...
```

Example: `arrays/0001-two-sum/approach-2/code.cpp`

- **topic** is the main pattern, in lowercase with hyphens (for example `arrays`, `two-pointers`, `dynamic-programming`, `graphs`).
- **lc-number** is zero-padded to 4 digits so folders sort in order.
- **approach-i** is numbered from the simplest (often brute force) to the most optimal.

## Index

| # | Problem | Topic | Difficulty | Approaches | Best complexity |
|---|---------|-------|------------|------------|-----------------|
| 268 | [Missing Number](https://leetcode.com/problems/missing-number/) | [bit-manipulation](bit-manipulation/0268-missing-number) | Easy | 2 | O(n) time, O(1) space |
| 22 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | [backtracking](backtracking/0022-generate-parentheses) | Medium | 3 | O(4^n / √n · n) time, O(n) extra space |
