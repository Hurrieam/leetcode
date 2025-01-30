type ReturnObj = {
    increment: () => number,
    decrement: () => number,
    reset: () => number,
}

function createCounter(init: number): ReturnObj {
    let current = init;
    return {
        increment: () => {
            return ++current;
        },
        decrement: () => {
            return --current;
        },
        reset: () => {
            current = init;
            return current;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */

(() => {
    const counter = createCounter(5);
    console.log(counter.increment());
    console.log(counter.reset());
    console.log(counter.decrement());
})()
