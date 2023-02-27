#User function Template for python3

import math
class Solution:
    def subsetXOR(self, arr, N, K): 
        i=0
        j=1
        count=1
        ans=0
        xor= arr[i]
        for i in range(N-1):
            if arr[i]==K:
                ans+=1
            else:
                count=2
                while(j!)
                for k in range(2,count+1):
                    xor^=arr[j]
                    k+=1
                



#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K = input().split()
        N = int(N)
        K = int(K)
        arr = input().split(' ')
        for itr in range(N):
            arr[itr] = int(arr[itr])
        ob = Solution()
        print(ob.subsetXOR(arr,N,K))
# } Driver Code Ends