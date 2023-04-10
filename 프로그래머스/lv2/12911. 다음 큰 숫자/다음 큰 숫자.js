      function solution(n) {
        let ans = 0;
        let num = n;
        let numOfOne = func(n);
        while (true) {
          num++;
          if (numOfOne === func(num)) {
            ans = num;
            break;
          }
        }
        return ans;
      }

      function func(num) {
        return num
          .toString(2)
          .match(/1/g)
          .filter((el) => el !== "").length;
      }