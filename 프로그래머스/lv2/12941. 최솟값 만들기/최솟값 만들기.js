     function solution(A, B) {  
        let ans=0; 
         
        const arrA = A.sort((a,b)=>a-b);
        const arrB= B.sort((a,b)=>b-a); 
         
         for(let i=0;i<A.length;i++){
             ans+=arrA[i]*arrB[i];
         }
         return ans;
     }
