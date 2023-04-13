function solution(arr) {
    let ans = 0;
    let sum=0; 
    for(let x of arr){
        sum+=x;
    }
    ans=sum/arr.length;
    
    
    return ans;
}