class Solution {
    public int maxSubarraySumCircular(int[] A) {
        int n=A.length;
        
        int[] p=new int[2*n+1];
        
        for(int i=0;i<2*n;++i)
        p[i+1]=p[i]+A[i%n];
        
        int ans=A[0];
        Deque<Integer>deque=new ArrayDeque();
        
        deque.offer(0);
        
        for(int j=1;j<=2*n;++j)
        {
            if(deque.peekFirst()<j-n)
                deque.pollFirst();
                   
        
             ans = Math.max(ans, p[j] - p[deque.peekFirst()]);
        
        while (!deque.isEmpty() && p[j] <= p[deque.peekLast()])
            deque.pollLast();
        
        deque.offerLast(j);
        }
 
          return ans;
    }
    
  
}
