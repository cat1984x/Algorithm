def findSmallest(arr): #找出一组数中最小值
    smallest = arr[0]
    smallest_index = 0
    for i in range(1,len(arr)): #从第二个元素开始
        if arr[i] < smallest:
            smallest = arr[i]
            smallest_index = i
    return smallest_index

def selectionSort(arr): #选择排序
    newArr = []
    for i in range(len(arr)): #循环，每次找出数组中最小值，删除它并放在新数组中
        smallest = findSmallest(arr)
        newArr.append(arr.pop(smallest))
    return newArr

print (selectionSort([5,3,6,2,10]))
        
