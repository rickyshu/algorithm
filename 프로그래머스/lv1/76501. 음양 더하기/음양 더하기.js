      function solution(absolutes,signs) {
        let ans=0; 
        let len=absolutes.length; 
        for(let i=0;i<len;i++){
            if(signs[i]){
                ans+=absolutes[i];
            }
            else{
                ans+=absolutes[i]*-1;
            }
        }
        return ans; 
}