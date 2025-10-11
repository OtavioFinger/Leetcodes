from typing import List

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        array = []
        soma_atual = 0

        for i in nums:
            soma_atual += i
            array.append(soma_atual)
            
        return array

def main():
    sol = Solution()
    
    # Testes rápidos
    print("Running Sum tests:")
    print(f"[1, 2, 3, 4] -> {sol.runningSum([1, 2, 3, 4])}")
    print(f"[1, 1, 1, 1, 1] -> {sol.runningSum([1, 1, 1, 1, 1])}")
    print(f"[3, 1, 2, 10, 1] -> {sol.runningSum([3, 1, 2, 10, 1])}")
    print(f"[] -> {sol.runningSum([])}")

if __name__ == "__main__":
    main()