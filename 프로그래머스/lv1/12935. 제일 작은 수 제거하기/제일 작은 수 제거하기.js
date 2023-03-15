function solution(arr) {
            let ans=[];
        if(arr.length===1)ans.push(-1);
        else{
        let min=Math.min(...arr);
        for(let x of arr){
            if(x!==min)ans.push(x);
        }
    }
        return ans;
}