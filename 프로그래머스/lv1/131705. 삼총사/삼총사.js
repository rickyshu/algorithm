function solution(number) {
    let ans = 0;

    function recur(cur,start){
        //만약에 
        if(cur.length===3) return cur.reduce((acc, cur)=> acc+cur,0)===0?ans++:null;
        
        for(let i=start;i<number.length;i++){
            recur([...cur, number[i]],i+1);
        }
        
    }
    recur([],0);
    
    return ans;
}