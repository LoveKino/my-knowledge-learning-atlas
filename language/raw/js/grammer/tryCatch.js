var log = console.log; // eslint-dsiable-line
var f1 = function () {
    try {
        throw new Error('123');
        // useless code after throw
        log('here!');
        return 200;
    } catch (err) { //
    }
    return 100;
};

var res1 = f1();

log(res1); // 100


var f2 = function () {
    try {
        throw new Error('123');
        // useless code after throw
        log('here!');
        return 200;
    } catch (err) {
        return 10;
    }
    return 100;
};

var res2 = f2(); // 10

log(res2);

var f3 = function () {
    throw new Error('123');
    log('here!');
    return 100;
};

var res3 = f3(); // Error: 123

log(res3);
