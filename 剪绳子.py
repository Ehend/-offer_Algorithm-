class Solution:
    def cutRope(self, number):
        # write code here
        if number<4:
            return number - 1
        elif number==4:
            return number
        else:
            n1=number/3
            k2=number-int(n1)*3
            k1=pow(3,n1)
            return k1*k2
