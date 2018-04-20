def rotate(nums, k):
    n = len(nums)
    idx = 0
    distance = 0
    cur = nums[0]
    for x in range(n):
        idx = (idx + k) % n
        nums[idx], cur = cur, nums[idx]
        print(nums)
        print(distance)
        print(idx)
        distance = (distance + k) % n
        if distance == 0:
            idx = (idx + 1) % n
            cur = nums[idx]

a = [1,2,3,4,5,6]
b = 4

rotate(a,b)
print(a)
