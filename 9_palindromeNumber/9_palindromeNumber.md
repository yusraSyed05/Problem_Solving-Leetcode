## 9. Palindrome Number

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise.

A **palindrome** is a number that reads the same forward and backward.


## Examples

### Example 1:
```
Input: x = 121  
Output: true 
Explanation: 121 reads as 121 from left to right and from right to left.
```

### Example 2:
```
Input: x = -121
Output: false  
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
```

### Example 3:
```
Input: x = 10
Output: false  
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
```


## Constraints
```
-2³¹ <= x <= 2³¹ - 1
```

## Follow Up

Could you solve it **without converting the integer to a string**?


## Approach

*Negative & trailing zero check:*
- If x < 0 → not a palindrome.
- If x ends with 0 but isn't 0 → not a palindrome.

*Reverse half the number:*
- Extract last digits from x and build reversed until x <= reversed.

*Compare halves:*
- For even-digit numbers: x == reversed
- For odd-digit numbers: x == reversed / 10 (middle digit skipped)

*Return true if either condition matches → it's a palindrome.*

## Complexity 
- Time complexity: O(log n)
- Space complexity: O(1)
