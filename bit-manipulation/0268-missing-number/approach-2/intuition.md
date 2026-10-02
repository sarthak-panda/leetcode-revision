# 268. Missing Number — Approach 2: XOR cancellation

[Problem](https://leetcode.com/problems/missing-number/) · Easy

**Idea:** `a ^ a = 0` and `a ^ 0 = a`. XOR every index `0..n` together with every value in `nums`. Each present number appears twice (once as an index, once as a value) and cancels out, so only the missing number is left.

**Steps**
1. Start with `r = n`, since `n` is the one number in `0..n` that is never an index.
2. For each `i`, do `r ^= i` and `r ^= nums[i]`.
3. Return `r`.

**Complexity:** O(n) time, O(1) extra space.

**Remember:** Seeding with `n` is the trick that covers the full range `0..n`. The sum formula `n(n+1)/2 - sum(nums)` works too, but XOR can't overflow.
