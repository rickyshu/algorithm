function solution(x) {
    let num=x;
    let sum=0;
    let ans = true;
    while(num){
        sum+=num%10; 
        num=parseInt(num/10);
    }
    console.log(x,sum);
    if(x%sum!==0)return false;
    return ans;
}