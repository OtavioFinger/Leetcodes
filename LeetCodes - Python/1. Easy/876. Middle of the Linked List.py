import math

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def middleNode(self, head):

        i = 1
        x = 1
        currentNode = head
        while currentNode != None:
            currentNode = currentNode.next
            i += 1

        mid = math.ceil(i / 2) 

        currentNode = head
        while x < mid:
            currentNode = currentNode.next
            x += 1

        return currentNode


def main():
    
    n1 = ListNode(1)
    n2 = ListNode(2)
    n3 = ListNode(3)
    n4 = ListNode(4)
    n5 = ListNode(5)

    n1.next = n2
    n2.next = n3
    n3.next = n4
    n4.next = n5

    head = n1

    NodeSol = Solution() #cria objeto
    middle = NodeSol.middleNode(head)
    print(f"Meio da lista é o nodo: {middle.val}")

if __name__ == "__main__":
    main()
