sorting algorithms

some sorting stuff i had to do for class

whats in here

- SelectionSort.cpp
- bubble_sort.cpp  
- insertion_sort.cpp

selection sort

finds the smallest thing and puts it at the front. does this over and over

pseudocode:

SELECTION_SORT(arr, n)
  for i = 0 to n-2
    minIdx = i
    for j = i+1 to n-1
      if arr[j] < arr[minIdx]
        minIdx = j
    swap arr[i] with arr[minIdx]


time: O(n²)  
space: O(1)

basically goes through and picks the minimum each time

bubble sort  

compares stuff next to each other and swaps if wrong order. bigger stuff "bubbles" to the end

pseudocode:

BUBBLE_SORT(arr, size)
  for i = 0 to size-2
    for j = 0 to size-2
      if arr[j] > arr[j+1]
        swap arr[j] with arr[j+1]


time: O(n²)  
space: O(1)

keeps swapping neighbors until its sorted

insertion sort

like sorting cards in your hand. takes one element and puts it where it belongs in the sorted part

pseudocode:

INSERTION_SORT(arr, n)
  for i = 1 to n-1
    key = arr[i]
    j = i-1
    while j >= 0 AND arr[j] > key
      arr[j+1] = arr[j]
      j = j-1
    arr[j+1] = key


time: O(n²)  
space: O(1)

shifts elements over to make room for the current one




quicksort

picks a pivot and puts smaller stuff on left and bigger stuff on right. then does the same thing recursively on both sides

pseudocode:

QUICKSORT(arr, left, right)
  i = left
  j = right
  pivot = arr[(left + right) / 2]
  
  while i <= j
    while arr[i] < pivot
      i++
    while arr[j] > pivot
      j--
    if i <= j
      swap arr[i] with arr[j]
      i++
      j--
  
  if left < j
    QUICKSORT(arr, left, j)
  if i < right
    QUICKSORT(arr, i, right)


time: O(n log n) average, O(n²) worst case  
space: O(log n) for recursion stack

way faster than the other ones for big arrays. uses divide and conquer




