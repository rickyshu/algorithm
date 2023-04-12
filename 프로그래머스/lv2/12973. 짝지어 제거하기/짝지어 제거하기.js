  function solution(str) {
        const stack = [];
        for (let i = 0; i < str.length; i++) {
          if (!stack.length || stack[stack.length - 1] !== str[i])
            stack.push(str[i]);
          else stack.pop();
        }
        return stack.length ? 0 : 1;
      }