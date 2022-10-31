class Solution {
    public int trap(int[] height) {
        int []rightGtr = new int[height.length];
        int []leftGtr = new int[height.length];
        //left greater
        for(int i=0; i<leftGtr.length; i++) {
            if(i==0) leftGtr[i]=height[i];
            else
                leftGtr[i] = Math.max(leftGtr[i-1], height[i]);
        }
        //right greater
        for(int i=rightGtr.length-1; i>=0; i--) {
            if(i==rightGtr.length-1) rightGtr[i]=height[i];
            else
                rightGtr[i] = Math.max(rightGtr[i+1], height[i]);
        }
        // System.out.println(Arrays.toString(rightGtr));
        int water =0;
        for(int i=0; i<height.length; i++) {
            int level = Math.min(rightGtr[i], leftGtr[i]);//waterlevel
            if(level>=height[i])
                water += level-height[i];
            
        }
        
        return water;
    }
}
