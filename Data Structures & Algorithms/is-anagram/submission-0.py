class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # write a line of code which states that if the length of s != t it returns false immediately
        # create two hashmaps 
        if len(s) != len(t):
            return False

        return sorted(s) == sorted(t)