# cracking
#vector

vector is an dynamic array with ability to resize itself
begin():return an pointer of the beginnig
end():return an pointer to the end
rbegin():return an pointer reverse iterator pointer that is the end of the array
rend():return an iterator pointer to the beginnig of the array
cbegin():return an constant itertor to the beginning of the array
cend():return an constant iterator to the end of the aray
crbegin():return an constant reverse iterator to the end of the array
crend():return an constant erverse itearator that points to the start of the array
size():returns no of elements in the array
max_size():return max size of the array
capacity():returns the size of the storage space thats currently allocated to the space
resize:it will resize it as per the array elements
empty():check whether the array is empty or not
shrink_to_fir():it will shrik the size to the no of array elements
reverse():it will reverse the array elements

elements accessing
at():they are used ti access elements at specified index
front():it will return the first element reference in the array
back():it will return last elements reference from the array
data():it will return a direct pointer to the memory array used internally by the vector to its own elements


#list 
list is an container that allow non contigious allocation 
****list do not allow random memory location access

methods
front():it will return an itereator pointer too the beginning of the list
end():it will return an iterator pointer to the ending of the list
front():it will return the first value from the list
back():it will return the last value from the list
push_front():it will add first element into the list
push_back():it will add the last element
pop_front():it will reomove the first element
pop_back():it will reomve the last element from the list
rbegin():it will return an iterator to the end of the list
rend():it will return an iterator to the beginning of the list
cbegin():it will reuturn an constant iterator to the beginning of the list
cend():it will return an constant iterator to the end of the list
crbegin():it will reuturn an constant reverse iterator to the end of the list
crend():it will return an constant reverse iterator to the begin of the list
empty():check the list is empty or not
insert():it will take two paramneter one is iterator and another is value
erase():used to remove an value from the list it will take iterator as an parameter
assign():they are used to assign temp value to the list
remove():remove all the element from the list that having the values
remove_if(fun):it will remove the elements from the list if the conditions are satisfied
reverse():it will revere the list
size():return the size of the list
resize():they are used to resize the list into specific count
sort():they are used to sort the list no paramete are taken
max_size():it will return the max size that allowed
unique():remove the consecutive elements from the list
emplace_front():used to insert an element into the front of the list
emplace_back():used to remove element from the back
clear():remove all the elements from the list
swap(lst1,lst2):they are used to swap the two list
splice():they are used to append an list    
        eg:lst1.splice(lst1.begin(),lst2)
merge():they are used to merege two list into one
        lst1.merge(lst2)
emplace():insert an element at specified position
    list<int>::iterator l1iter=l1.begin();
    advance(l1iter,3);
    l1.emplace(l1iter,100);


DEQUEUE

they are similar to vector but contiguous storage allocation are not guaranted
they have same fuction as vector but inaddition to that they also contain push and pop
they have similar function to vector
insert():insert an element 
    it can be done on many ways
        deq.insert(deq.begin(),0);//for insertig an single zero
        deq.insert(deq.begin(),2,0);//for inserting two zeros
         //inserting an range of value from an vector
         vector<int> v1{1,2,3};
        deq.insert(deq.begin(),v1.begin(),v1.end());
rbegin():
    return an iterator to the end of the dequeue
rend():
    return an iterator to the begin of the dequeue
cbegin():
    returns an constant iterator to the beginning of the dequeue
cend():
    returns an constant iterator to the end of the dequeue
max_size:
    returns max size that allowed for that dequeue
assign():
    they are used to assing some dummy values
resize():
    it will resize the dequeue as per the size specified
push_front():
    insert element into the beginning of the dequeue
push_back():
    push an element into the end of the dequeu
pop_front():
    pop out the first element from the dequeue
pop_back():
    pop_out last element fromthe dequeue
front():
    returns first element from the dequeue
back():
    returns last elements from  the dequeue
clear():
    remove all the elements from dequeue and return epty queue
erase():
    they are used to remove an element it will take iterator as input
empty():
    they are used to check whether the dequeue is empty
size():
    it will return the no of elements in the list
emplace_front():
    they are used to insert an elements into the front of the dequeue
emplace_back():
    they are used to insert an element into the end of the dequeue
    


ARRAY
for creating an array we have to specify the size of the array
    array<int,6> arr{1,2,3,4,5,6};

fucntion are:
at():
    used to get element at specified location
get():
    for get we have tp add tuple headr
    get<0>(arr1)//return element in 0th index
[]: arr[0];
front():
    it will return the first element in the array
back():
    it will return last elementn in the array
size():
    return the actual size of the array
max_size:
    return the size of the array specified in the delcaration
swap():
    used to swap two array
    arr.swap(arr2)
empty():
    rerutrn 1 when array is empty otherwise 0
fill: 
    used to set an value into the whole array
    arr1.fill(0//wet alll elemts into zero)


FORWARD_LIST

the disadvantage of forward list is that the there is no reverse iterator
and cannot access randomly
assign():
    its an fucntioin that are used to assign value for example u want insert 5 1
 push_front():
    used to insert element into the front
emplace_fron():
    used to insert element into fornt
pop_front:
    used to remove element from front
insert_after():
    it will insert element after certain itereator
emplace_after():
    used to insert element after certain iterator
erase_after:
    used to erase elements after certain iterator
remove():
    used to remove particular element from the forward_list
remove_if():
    this will remove element based on certain condition
clear():
    clear all the elements in the list
splice_after():
    used to insert element after certain position
front():
    it will return the first element
begin():
    it will return an iterator pointer to the beginnig
end():
    it will return an pointer to the end of the list
cbegin:
    return an constant begin pointer
cend():
    return an constant end pointer
before_begin():
    return an iterator that points to the iterator before the first element
cbefore_begin():
    return an constant iterator to the iterator before first element
max_size():
    return max size
resize():
    it will resize the list
unique():
    it will remove  all the consecutive duplicate from the list
reverse():
    it will reverse  the elemnts