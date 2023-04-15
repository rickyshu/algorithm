      function solution(people, limit) {
        let ans = 0;
        //전형적인 greedy 알고리즘 풀이
        //매순간 최적의 선택을 해야 한다.

        //일단 정렬 한 후에 양쪽 앞 뒤의 숫자를 합해서 맞으면 ++하고,pop(),shift를 한다.
        //안 맞으면 뒤에 것만 담고, pop을 한다.
        const sortArr = (arr) => {
          return arr.slice().sort((a, b) => a - b);
        };
        //배열을 정렬한다.
        const sortedArr = sortArr(people);
        for (let i = 0; i < people.length; i++) {
          //앞뒤를 합해서 limit과 동일하거나 작은 경우 =>담을 수 있음
          if (sortedArr.length === 0) break;
          if (sortedArr[0] + sortedArr[sortedArr.length - 1] <= limit) {
            sortedArr.pop();
            sortedArr.shift();
          } else {
            sortedArr.pop();
          }
          ans++;
        }
        // sortArr(people);
        //사람을 구출하기 위해 필요한 구명보트의 갯수를 출력해라!
        return ans;
      }