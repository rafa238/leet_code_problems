#https://leetcode.com/problems/sort-characters-by-frequency/
class Solution(object):
    def frequencySort(self, s):
        dict1 = {}
        maxium = 0
        res = ""
        for i in s:
            if i in dict1:
                dict1[i] += 1
            else: 
                dict1[i] = 1
        sorted_dict = sorted(dict1.items(), key = lambda x: x[1])
        for i in range(len(sorted_dict)-1, -1, -1):
            res += sorted_dict[i][0]*sorted_dict[i][1]
        return res