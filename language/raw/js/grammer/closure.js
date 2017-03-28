var log = console.log; // eslint-disable-line
//simple closure
var closure = function () {
    var name = 'kino';
    return function () {
        return name;
    };
}();
log(closure());

//simple singleton
var singleton = function () {
    return function () {
        return 'I\'m a singleton!';
    };
}();
log(singleton());

//singletonClass
var singletonClass = function (fn) {
    var instance;
    return instance || (instance = fn.apply(this, arguments));
};

var singletonInst = singletonClass(function () {
    return 'I\'m a singletonInst!';
});

log(singletonInst);
