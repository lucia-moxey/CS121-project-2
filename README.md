Goal: To sort an array of 9 integers using bubble sort algorithm. 

Functions to Be Built

showMyArray
-prints current contents of array
-input: int pointer (list)

swapItems
-exchanges values of two ints
-input: two int pointers, a and b

runBubbleSort
-sorts array using bubble sort algorithm
-input: int pointer (list)

Algorithm and Pseudocode

Make function showMyArray that takes list of int
Make function runBubbleSort that takes list of int
Make function swapItems that takes two int addresses

showMyArray(list):
    input int array
    print "[ "
    for i from 0 to ARRAY_SIZE - 1:
        print the value at list[i] with a space
    print "]" and a new line

swapItems(first, second):
    make temporary variable
    make integer variable "temp"
    store the value at first into temp
    store the value at second into first
    store the value in temp into second
    return nothing

runBubbleSort(list):
    make int variables i and j
    for i from 0 to ARRAY_SIZE - 1:
        for j from 0 to ARRAY_SIZE - 2:
            if list[j] > list[j+1]:
                if they are out of order, swap them
                call swapItems with list[j] and list[j + 1]
                print list to see progress
                call showMyArray with list
    return nothing

main(): 
    make int array myNumbers with {7, 3, 9, 4, 6, 1, 2, 8, 5}
    
   show list
   print "Before: "
   call showMyArray with myNumbers

  declare integer 'x' and set to 3
  declare integer 'y' and set to 5
  print the current values of x and y
  call swapItems with address of x and y
  print the new values of x and y

  call runBubbleSort with myNumbers
  print "After: "
  call showMyArray with myNumbers

  return 0
