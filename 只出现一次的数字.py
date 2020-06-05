# -*- coding:utf-8 -*-
class Solution:
    # 返回[a,b] 其中ab是出现一次的两个数字
    def FindNumsAppearOnce(self, array):
        # write code here
        ar=[]
        for i in array:
            n=array.count(i)
            if n==1:
                ar.append(i)
        return ar
