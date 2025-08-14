from typing import List
class Solution:
    def twoSum(self,arr: List[int], target: int):
        l=len(arr)
        for i in range(0,l):
            finder=target-arr[i]
            close=0
            for j in range(i+1,l):
                if(finder==arr[j]):
                    a=i
                    b=j
                    close=1
                    break
            if(close==1):
                break
        return [a,b]

        
