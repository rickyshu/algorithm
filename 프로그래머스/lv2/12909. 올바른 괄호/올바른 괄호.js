function solution(s){
         let ans=true;
        let stack=[];
        let len=s.length; 
        stack.push(s[0]);
        console.log(stack);
        for(let i=1;i<len;i++){
          if(s[i]==='(')stack.push(s[i]);
          else{
            if(stack[stack.length-1]==='(')stack.pop(); 
            else return false;
          }
        }
        if(stack.length>0)return false;
        return ans;
}