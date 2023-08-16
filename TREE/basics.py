from collections import deque
class Node:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

def insert(root:[Node], data, option):
    if root is None:
        return Node(data)
    temp = root
    while temp:
        if temp.left is None:
            temp.left = Node(data)
            break
        elif temp.right is None:
            temp.right = Node(data)
            break
        temp = temp.left if option == 'l' else temp.right
    return root

def dfs(root:[Node]):
    if root is None:
        return
    print(root.data)
    dfs(root.left)
    dfs(root.right)

def dfs_stack(root:[Node]):
    if root is None:
        return 
    stack=[root]
    while stack:
        temp=stack.pop()
        print(temp.data)
        if temp.left:
            stack.append(temp.left)
        if temp.right:
            stack.append(temp.right)
def BFS(root:[Node]):
    queue=deque([root])
    while queue:
        temp=queue.popleft()
        print(temp.data)
        if temp.left:
            queue.append(temp.left)
        if temp.right:
            queue.append(temp.right)

def height(root:[Node]):
    if root is None:
        return 0
    return 1+max(height(root.left),height(root.right))

def BFS_recursion(root:[Node],level):
    if root is None:
        return
    if level==1:
        print(root.data,end=" ")
    elif level>1:
        BFS_recursion(root.left,level-1)
        BFS_recursion(root.right,level-1)

def bfs_reurive_start(root:[Node]):
    h=height(root)
    print("\nheight of tree is: ",h)
    for i in range(1,h+1):
        BFS_recursion(root,i)

def preorder(root:[Node]):
    if root:
        print(root.data)
        preorder(root.left)
        preorder(root.right)
    return None
if __name__ == '__main__':
    root = None
    while True:
        num, op = input("\nEnter user data and where to be inserted: ").split(' ')
        num = int(num)
        root = insert(root, num, op)
        # dfs(root)
        # print(root)
        # dfs_stack(root)
        # BFS(root)
        bfs_reurive_start(root)

