function solution(s) {
            let ans='';    
            let arr=s.split(' ');
            console.log(arr);
            for(let i=0;i<arr.length;i++){
                let str=arr[i];
                for(let j=0; j<str.length;j++){ 
                    if(j%2===0){ 
                        ans+=str[j].toUpperCase();
                        
                    }
                    else ans+=str[j].toLowerCase();
                }
                if(i===arr.length-1)break;
                ans+=' ';
            }
            return ans;
}