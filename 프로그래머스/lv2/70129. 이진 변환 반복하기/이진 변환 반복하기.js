function solution(s) {
        let ans=[];
          let zero=0; 
          let change=0;
          while(!(s==='1')){
            let str='';
            for(let x of s){
              if(x==='1')str+=x;
              else{
                zero++;
              }
            }
            s=(str.length).toString(2); 
            change++;
          }
          ans.push(change); 
          ans.push(zero);
          return ans;
}