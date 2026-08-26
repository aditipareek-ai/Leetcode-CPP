class Solution {
    public String shortestBeautifulSubstring(String s, int k) {
        int min = Integer.MAX_VALUE;
        int ones = 0;
        int left = 0;
        String ans = "";

        for(int i = 0; i<s.length(); i++){
            if(s.charAt(i) == '1'){
                ones++;
            }
            while(ones == k){
                int len = i-left+1;
                if(len<min || (len == min && s.substring(left, i+1).compareTo(ans)<0)){
                    min = Math.min(min, len);
                    ans = s.substring(left, i+1);
                }
                if(s.charAt(left) == '1'){
                    ones--;
                }
                left++;
            }
        }
        return ans;
    }
}