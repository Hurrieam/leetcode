"use strict";
function createHelloWorld() {
    return function (..._args) {
        return "Hello World";
    };
}
;
/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */
(() => {
    const f = createHelloWorld();
    console.log(f());
})();
//# sourceMappingURL=app.js.map