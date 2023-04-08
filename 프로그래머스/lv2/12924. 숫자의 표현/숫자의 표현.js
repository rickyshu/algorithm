    function solution(n) {
        let ans = 0;
        let set = 1;
        while (set <= n) {
          let continAdd = 0;
          for (let i = set; i <= n; i++) {
            continAdd += i;
            if (continAdd === n) {
              ans++;
              break;
            } else if (continAdd > n) break;
          }
          set++;
        }
        return ans;
      }