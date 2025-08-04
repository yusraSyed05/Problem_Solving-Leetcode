## 3591 :: Check if Any Element Has Prime Frequency

You are given an integer array `nums`.

Return true if the frequency of any element of the array is prime, otherwise, return false.

The frequency of an element `x` is the number of times it occurs in the array.

A prime number is a natural number greater than 1 with only two factors, 1 and itself.

### Example 1:
```
Input: nums = [1,2,3,4,5,4]  
Output: true
 
Explanation:
4 has a frequency of two, which is a prime number.
```

### Example 2:
```
Input: nums = [1,2,3,4,5] 
Output: false
  
Explanation:  
All elements have a frequency of one.
```

### Example 3:
```
Input: nums = [2,2,2,4,4]  
Output: true

Explanation:  
Both 2 and 4 have a prime frequency.
```

### Constraints:
```
- 1 <= nums.length <= 100  
- 0 <= nums[i] <= 100
```

### Intuition

The problem is about checking whether any element in the array appears a prime number of times.

So the idea is simple — just figure out how many times each number occurs, and then see if any of those counts is a prime number.  
If even one of them is prime, the answer should be `true`.


### Approach

- First, use a hash map (`unordered_map`) to count how many times each number shows up in the array.
- Then, define a helper function `isPrime()` to check if a number is prime.
- If any frequency is prime, return `true`. If none are, return `false`.


### Complexity

**Time:**  
```
O(n + √c₁ + √c₂ + ... + √cᵤ) → Worst case: O(n√n)  
Where:  
- n = size of the input array  
- u = number of unique elements  
- cᵢ = frequency of the i-th unique number  
```

**Space:**  
```
O(n)
```
