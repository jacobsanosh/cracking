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