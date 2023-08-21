import heapq
lst=[1,5,3,6,9,65,32,12]
heapq.heapify(lst)
print(lst)
heapq.heappush(lst,45)
print("after inserting ",lst)
heapq.heappop(lst)
print("after removing the smallset element is ",lst)

heapq.heapreplace(lst,100)
print("after replacing the smallest element with 100 is",lst)