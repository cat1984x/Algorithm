'''
def sum(arr):
    if arr == []:
        return 0;
    else:
        first = arr[0]
        arr.pop(0)
        return first + sum(arr)
        
print (sum([2,4,6]))
'''

def sum(arr):
    if arr == []:
        return 0;
    return arr[0] + sum(arr[1:])
        
print (sum([2,4,6]))
