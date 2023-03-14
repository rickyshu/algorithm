function solution(phone_number) {
       let ans='';
       let len=phone_number.length;
       let starcnt=len-4;
       let lastFour=phone_number.substring(starcnt);
       for(let i=0;i<starcnt;i++){
        ans+='*'; 
       } 
       ans+=lastFour;
       return ans;
}