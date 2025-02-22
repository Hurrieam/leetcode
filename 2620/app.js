"use strict";
function createCounter(n) {
    let cnt = n;
    return function () {
        return cnt++;
    };
}
/**
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
(() => {
    const counter = createCounter(10);
    console.log(counter());
    console.log(counter());
    console.log(counter());
})();
//# sourceMappingURL=app.js.map