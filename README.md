# 关于剑指offer的随笔

# 1、剪绳子
题目：给你一根长度为n的绳子，请把绳子剪成整数长的m段（m、n都是整数，n>1并且m>1），每段绳子的长度记为k[0],k[1],...,k[m]。请问k[0]*k[1]*...*k[m]可能的最大乘积是多少？例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。

按照哥德巴赫猜想，所有大于5的数字可以拆分为3+(n-3)或2+(n-2)。

当n>5时，3*(n-3)>2*(n-2)永远成立，故需对5之前的情况进行区分，当n>5时，只需令3尽可能多出现，即可使乘积最大。

# 2、数组中重复的数字
题目：在一个长度为n的数组里的所有数字都在0到n-1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组{2,3,1,0,2,5,3}，那么对应的输出是第一个重复的数字2。

步骤为：先找出所有重复的数字，再将重复的数字与它前面的数字比较，若没有相同的则存入一个数组，从该数组中随便取一个数字即为重复的数字。该算法优点在于能找出所有重复的数字，并按出现的顺序存入新数组中。

# 3、数组中只出现一次的数字
题目：一个整型数组里除了两个数字之外，其他的数字都出现了两次。请写程序找出这两个只出现一次的数字。

步骤：对数组中每个数字进行计数，计数为一的即出现一次。

# 4、上楼梯
题目：有n级台阶，每一步可以走1级或2级，问一共有多少种走法

步骤：简单的排列组合
