function solution(n) {
         let ans=[];
            while(n){
                ans.push(n%10);
                n=parseInt(n/10);
            }
            ans.toString().split("").reverse();
         return ans;
}