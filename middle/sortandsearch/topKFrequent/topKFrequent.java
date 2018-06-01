import java.util.List;
import java.util.HashMap;
import java.util.PriorityQueue;

public List topKFrequent(int[] nums, int k) {  
        if(k <= 0) return null;  
        HashMap ht = new HashMap();  
        for(int key : nums){  
            Integer value = ht.get(new Integer(key));  
            if(value == null)  
                ht.put(new Integer(key), new Integer(1));  
            else  
                ht.put(new Integer(key), new Integer(value.intValue() + 1));  
        } //O(n) count #element  
        PriorityQueue pq = new PriorityQueue(); //achive MinHeap O(nlogn)  
        ArrayList list = new ArrayList<>();  
        for(Integer key : ht.keySet()){  
            pq.add(new Pair(key, ht.get(key)));  
            if(pq.size() > k){  
                pq.poll();  
            }  
        }  
       Pair pr;  
       while((pr = pq.poll()) != null){  
            list.add(0, pr.getKey());            
        }  
        return list;  
    }     
      
    class Pair implements Comparable{  
        Integer key;  
        Integer value;  
          
          
          
        public Pair(Integer key, Integer value) {  
            super();  
            this.key = key;  
            this.value = value;  
        }  
  
        public Integer getKey() {  
            return key;  
        }  
  
        public void setKey(Integer key) {  
            this.key = key;  
        }  
  
        public Integer getValue() {  
            return value;  
        }  
  
        public void setValue(Integer value) {  
            this.value = value;  
        }  
  
        //make out Pair nature order  
        public int compareTo(Pair o) {  
            // TODO Auto-generated method stub  
            if(value > o.value)   
                return 1;  
            else if(value < o.value)  
                return -1;  
            else  
                return 0;  
        }  
	public static void main(String args[]){
		int[16] a = {1,2,0,2,1,0,2,1,0,2,1,0,2,1,0,2}
		topKFrequent(a,16);
	}
    }  
