class Solution(object):
    def topKFrequent(self, nums, k):
        alist=[]
        bdict=dict()
        dlist=[]
        for i in range(0,len(nums)):
            if(nums[i] not in alist):
               alist.append(nums[i])
               bdict[nums[i]]=1
            else:
               bdict[nums[i]]+=1
        clist = sorted(bdict.items(), key=lambda bdict : bdict[1], reverse=True)
        for i in clist:
            dlist.append(i[0])
        return dlist[0:k]

if __name__ == "__main__":
    nums = [2,1,0,2,3,4,123,4,12,4,1,2,124,124,313]
    s = Solution()
    print(s.topKFrequent(nums,4))
