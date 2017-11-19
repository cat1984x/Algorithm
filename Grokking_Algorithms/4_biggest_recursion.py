'''
def biggest(arr):
    if len(arr) == 1:
        return arr[0];
    if len(arr) >= 2:
        if arr[0] > arr[1]:
            arr.pop(1)
        else:
            arr.pop(0)
    return biggest(arr)
        
print (biggest([5,2,4,6,1,8,3,5]))
'''

def biggest(arr):
    if len(arr) == 2:
        return arr[0] if arr[0] > arr[1] else arr[1] #相当于三元运算符
    sub_max = biggest(arr[1:])
    return arr[0] if arr[0] > sub_max else sub_max
        
print (biggest([5,2,4,6,1,8,3,5]))
