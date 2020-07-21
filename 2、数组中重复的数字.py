# -*- coding:utf-8 -*-
class Solution:
    # 这里要特别注意~找到任意重复的一个值并赋值到duplication[0]
    # 函数返回True/False
    def duplicate(self, numbers, duplication):
        # write code here
        b=[]
        c=[]
        d=[]
        for i in numbers:
            n=numbers.count(i)
            if n>1:
                b.append(i)
        if b:
            for j in range(len(b)):
                if j<1:
                    d.append(b[j])
                    continue
                else:
                    for k in range(j):
                        c.append(b[j]-b[k])
                    if c.count(0)==0:
                        d.append(b[j])
                    else:
                        continue
            duplication[0]=d[0]
            return True
        else:
            return False
