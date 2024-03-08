def maxSubArray(a):
    n = len(a)
    if n == 1:
        return 0
    # your code here
    max_diff = float('-inf')  
    min_so_far = float('inf') 
    
    for i in range(n):
        min_so_far = min(min_so_far, a[i])  
        max_diff = max(max_diff, a[i] - min_so_far)  
    
    return max_diff
    
