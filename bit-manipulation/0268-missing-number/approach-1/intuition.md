# 268. Missing Number — Approach 1: Seen array

[Problem](https://leetcode.com/problems/missing-number/) · Easy

**Idea:** The numbers come from `0..n` with exactly one missing. Mark every number you see, then the first unmarked one is the answer.

**Steps**
1. Make a boolean array `freq` of size `n + 1`, all `false`.
2. For each `x` in `nums`, set `freq[x] = true`.
3. Scan `0..n` and return the first `i` where `freq[i]` is `false`.

**Complexity:** O(n) time, O(n) extra space.

**Remember:** Size is `n + 1`, not `n`, because the range includes `n` itself.
