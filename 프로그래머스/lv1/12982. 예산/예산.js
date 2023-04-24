      function solution(d, budget) {
        let ans = 0;
        let sort = d.sort((a, b) => a - b);
        for (let i = 0; i < d.length; i++) {
          if (budget < sort[i]) break;
          ans++;
          budget -= sort[i];
        }
        return ans;
      }