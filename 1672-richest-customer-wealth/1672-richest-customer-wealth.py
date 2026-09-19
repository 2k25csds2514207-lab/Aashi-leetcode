class Solution:
    def maximumWealth(self, accounts: list[list[int]]) -> int:
        wealths=[]

        for customer in accounts:
            wealths.append(sum(customer))

        return max(wealths)



        