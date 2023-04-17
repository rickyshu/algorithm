      function solution(n, a, b) {
        let ans = 0;
        //결국 추리다 보면 같아지기 때문에 밑과 같이 진행해도 된다.
        while (a !== b) { 
          a = Math.ceil(a / 2); //이기면 결국 자신의 n-1번째가 된다.(이것을 표현하기 위해 Math.ceil를 사용한 것!)
          b = Math.ceil(b / 2);
          ans++;
          //결국 같아지는 지점까지 위의 코드를 실행하고 ans++하다가 return하면 된다!
        }

        return ans;
      }
