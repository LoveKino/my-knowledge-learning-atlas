'use strict';

let log = console.log; // eslint-disable-line

log(`number ${1 + 2}`);

let tag = (strings, ...values) => {
    log(strings[0]);
    log(strings[1]);
    log(values[0]);
    log(values[1]);
    return 'haha';
};

let a = 3, b = 4;

log(tag `hello ddchen ${a + b} and world ${a * b}`);

// return not string

let tag2 = (strings, ...values) => {
    log(strings.raw, values);
    return {
        a: 1
    };
};

log(tag2 `hello ${0} world!`);
