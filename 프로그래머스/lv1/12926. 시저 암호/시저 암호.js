      function solution(s, n) {
        let ans = "";
        for (let i = 0; i < s.length; i++) {
          if (s[i] === " ") {
            ans += s[i];
            continue;
          }
          let ascii = s.charCodeAt(i) + n;
          console.log("ascii", ascii);
          if (s.charCodeAt(i) > 90) {
            //대문자 영역
            if (ascii > 122) ascii = 96 + (ascii - 122);
          }
          if (s.charCodeAt(i) <= 90) {
            //소문자 영역
            console.log("소문자", ascii);
            if (ascii > 90) ascii = 64 + (ascii - 90);
          }
          ans += String.fromCharCode(ascii);
        }
        return ans;
      }