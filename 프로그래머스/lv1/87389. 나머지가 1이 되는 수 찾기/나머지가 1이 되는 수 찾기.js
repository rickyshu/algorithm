function solution(n) {
    let ans = 1;
    while(true){
        if(n%ans===1){
            break;
        }
        ans++;
    }
    
    return ans;
}