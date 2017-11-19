def count(arr):
    if arr == []:
        return 0;
    return 1 + count(arr[1:])
        
print (count([5,2,4,6]))
