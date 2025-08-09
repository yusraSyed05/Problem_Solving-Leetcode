## Reverse Integer

Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`. Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

### Example 1:
```
Input: x = 123  
Output: 321
```

### Example 2:
```
Input: x = -123  
Output: -321
```

### Example 3:
```
Input: x = 120  
Output: 21
```

### Constraints:
```
-2^31 <= x <= 2^31 - 1
```
### Intuition
We need to reverse the digits one by one.  
But while reversing, we must make sure the number doesn't overflow beyond the 32-bit integer range.

### Approach
1. Start with a variable `rev = 0` to store the reversed number.
2. Take the last digit of `x` using `x % 10` and store it in `pop`.
3. Remove the last digit from `x` using `x /= 10`.
4. Before adding `pop` to `rev`, check if `rev` will overflow:
   - If `rev > INT_MAX/10` or `rev == INT_MAX/10` and `pop > 7`, return `0`.
   - If `rev < INT_MIN/10` or `rev == INT_MIN/10` and `pop < -8`, return `0`.
5. Add `pop` to `rev` (`rev = rev * 10 + pop`).
6. Repeat until `x` becomes `0`.
7. Return `rev`.

### Complexity
- **Time Complexity:** `O(log n)`   
- **Space Complexity:** `O(1)` 


