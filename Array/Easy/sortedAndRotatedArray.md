## 1752. Check if Array is Sorted and Rotated

Given an array `nums`, return `true` if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return `false`.

There may be duplicates in the original array.

Note: An array `A` rotated by `x` positions results in an array `B` of the same length such that `B[i] == A[(i+x) % A.length]` for every valid index `i`.


## Examples

### Example 1:
```
Input: nums = [3,4,5,1,2]
Output: true
Explanation: [1,2,3,4,5] is the original sorted array.
You can rotate the array by x = 2 positions to begin on the element of value 3: [3,4,5,1,2].
```

### Example 2:
```
Input: nums = [2,1,3,4]
Output: false
Explanation: There is no sorted array once rotated that can make nums.
```

### Example 3:
```
Input: nums = [1,2,3]
Output: true
Explanation: [1,2,3] is the original sorted array.
You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.
```
## Intuition
We want to check if the given array is a sorted array that has been rotated.

In a sorted array (non-decreasing order), every element is smaller than or equal to the next one. `[1, 2, 3, 4, 5]`

When this array is rotated, most of the order still looks sorted.
rotate `[1, 2, 3, 4, 5] → [3, 4, 5, 1, 2]`

-3 < 4 , 4 < 5 → looks sorted

-But 5 > 1 → the order is broken at this one place only

-Then 1 < 2 → sorted again

So, in a sorted and rotated array, the order can break only once (where the largest element is followed by the smallest).

If we find that the order breaks more than once, then it cannot be a sorted and rotated array.

## Approach
- Go through the array and check where the order is broken
that is, when `nums[i] > nums[i+1]`

- Keep a counter of how many times this happens.

- Also check the last element with the first one, because in rotation the last can be bigger than the first.

- If the counter is 0 or 1, then the array is sorted and rotated return true

- If the counter is more than 1, it means the array cannot be sorted and rotated return false

## Complexity
-  Time complexity: O(n)   
-  Space complexity: O(1)

## Constraints
```
1 <= nums.length <= 100
1 <= nums[i] <= 100
```

