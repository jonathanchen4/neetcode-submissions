class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # create a set of two pointers one at the beginning of the left side
        # and create another one at the beginning of the right side
        # each one will input their value at their certain point and add each value together
        # if the value = target value, then we can return the two values
        # if the values != target value then we can move the right pointer over one unit
        # if the right pointer goes past the left pointer, then we can move the left pointer to the right one unit and have the right pointer start back at the right and do it over again

        hashmap = {}

        for i, n in enumerate(nums): 
            diff = target - n
            if diff in hashmap:
                return [hashmap[diff], i]
            hashmap[n] = i
        return