class Solution {
    private HashMap<String, Integer> wordCount = new HashMap<String, Integer>();
    private int wordLength;
    private int substringSize;
    private int k;
    
    private boolean check(int i, String s) {
        // Copy the original dictionary to use for this index
        HashMap<String, Integer> remaining = new HashMap<>(wordCount);
        int wordsUsed = 0;
        
        // Each iteration will check for a match in words
        for (int j = i; j < i + substringSize; j += wordLength) {
            String sub = s.substring(j, j + wordLength);
            if (remaining.getOrDefault(sub, 0) != 0) {
                remaining.put(sub, remaining.get(sub) - 1);
                wordsUsed++;
            } else {
                break;
            }
        }
        
        return wordsUsed == k;
    }
    
    public List<Integer> findSubstring(String s, String[] words) {
        int n = s.length();
        k = words.length;
        wordLength = words[0].length();
        substringSize = wordLength * k;
        
        for (String word : words) {
            wordCount.put(word, wordCount.getOrDefault(word, 0) + 1);
        }
        
        List<Integer> answer = new ArrayList<>();
        for (int i = 0; i < n - substringSize + 1; i++) {
            if (check(i, s)) {
                answer.add(i);
            }
        }
        
        return answer;
    }
}

// class Solution {
//     public List<Integer> findSubstring(String s, String[] words) {
//         List<Integer> lst = new LinkedList();
//         for(int i=0; i<s.length(); i+=4){
//             int x = Check(s,words, i);
//             if(x!=-1){
//                 lst.add(x);
//             }
//         }
//         return lst;
        
//     }
//     int Check(String s,String[] words, int index){
//         HashMap <String, Integer> map = new HashMap();
//         for(int i=0; i<words.length; i++) {
//             if(map.containsKey(words[i])){
//                 int x = map.get(words[i]);
//                 x++;
//                 map.put(words[i],x);
//             }
//             else{
//                 map.put(words[i],1);
//             }
//         }
//         int i=0;
//         while(i<words.length*words[0].length()){
//             String str = "";
//             int j=0;
//             while(j<4&&i<words.length){
//                 str+=s.charAt(i+index);
//                 i++;
//                 j++;
//             }
//             if(map.containsKey(str)){
//                 int x = map.get(str);
//                 x--;
//                 if(x==0){
//                     map.remove(str);
//                 }
//             }
//             if(map.size()==0){
//                 return i+index-words.length*words[0].length();
                
//             }
            
//         }
//         return -1;
        
//     }
    
// }                                                                                                                                                                                                                                                                                                        
