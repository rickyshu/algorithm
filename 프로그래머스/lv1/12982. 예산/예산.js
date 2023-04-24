      function solution(d, budget) {
        let ans = 0;
        let sort = d.sort((a, b) => a - b);
        for (let i = 0; i < d.length; i++) {
          if (budget < d[i]) break;
          ans++;
          budget -= d[i];
        }
        return ans;
      }