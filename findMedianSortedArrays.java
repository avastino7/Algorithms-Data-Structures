class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        ArrayList<Integer> l1=new ArrayList<Integer>();
        for(int k: nums1)
        {
            l1.add(k);
        }
         for(int k: nums2)
        {
            l1.add(k);
        }     
        Collections.sort(l1);      
            if(l1.size()%2==0)
                  return  ((double)((double)l1.get(l1.size()/2-1) + (double)l1.get(l1.size()/2))/2);
            else
                return (double)l1.get(l1.size()/2);
    } 
}
