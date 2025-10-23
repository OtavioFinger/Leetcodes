from typing import List

class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        
        answer = []

        for i in range(1, n+1):
            if i % 3 == 0:
                out = "Fizz"
                if i % 5 == 0:
                    out += "Buzz"
            elif i % 5 == 0:
                out = "Buzz"
            else:
                out = str(i)
            answer.append(out)

        return answer

def main():
    solution = Solution()
    
    # Teste com diferentes valores
    test_cases = [3, 5, 15, 7]
    
    for n in test_cases:
        result = solution.fizzBuzz(n)
        print(f"n = {n}: {result}")

if __name__ == "__main__":
    main()