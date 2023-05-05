function solution(t, p) {
    //5-2 =>3
        let ans = 0;
        const tLen = t.length;
        const pLen = p.length;

        for (let i = 0; i <= tLen - pLen; i++) {
          if (+t.slice(i, i + pLen) <= +p) {
            ans++;
          }
        }
        return ans;
}