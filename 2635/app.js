"use strict";
function map(arr, fn) {
    let arr_copy = arr;
    for (let i = 0; i < arr.length; i++) {
        arr_copy[i] = fn(arr[i], i);
    }
    return arr_copy;
}
;
(() => {
    let arr = [1, 2, 3, 4, 5];
    let arr2 = map(arr, (n, i) => n + i);
    console.log(arr2);
    console.log(arr);
})();
//# sourceMappingURL=app.js.map