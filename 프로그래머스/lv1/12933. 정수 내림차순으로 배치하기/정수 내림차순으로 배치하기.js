function solution(n) {
    let ans = 0;
    ans=Number((n+'').split('').sort((a,b)=>{return b-a}).join(''));
    
    
    
    return ans;
}