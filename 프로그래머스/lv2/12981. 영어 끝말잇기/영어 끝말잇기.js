      function solution(n, words) {
        let ans = [0, 0];

        for (let i = 0; i < words.length; i++) {
          let word = words[i];
          let p = (i % n) + 1; //1,2,3으로 계속 고정이 된다? 나머지의 의의가 무엇이냐? => 0,1,2,0,1,2,0,1,2,(범위 안으로 계속 가둘 수 있다)
          let turn = Math.ceil((i + 1) / n); // 0.3333, 0.6666 , 1 => 1.333, 1.666 (수학적으로 생각해봐도=>0을 제외하고, 1을 3번 분할, 2를 3번 분할해서 각각 다 3번이 나오게 된다)
          //5일 경우도 1을 5번 나누니까 5번의 분할이 가능해져서 round5까지 count를 할 수 있는 것이다.

          if (i > 0) {
            //왜 이전 단어의 마지막을 보느냐???=> 첫 번째 경우는 그냥 넘어가게 되고, 결국 idx=1부터 해당 조건문을 돌기 시작한다.
            let last = words[i - 1].split("").pop(); //마지막 문구를 담게 된다. words.splite("").pop()이 더 좋아보이긴 함!
            //만약에 현 문자의 첫 char!==이전 문자의 마지막 char의 경우 || 그리고 이미 포함된 경우 return [p, turn]을 한다.
            if (i > words.indexOf(word) || last !== words[i][0]) {
              return [p, turn];
              break;
            }
          }
        }
        return ans;
      }