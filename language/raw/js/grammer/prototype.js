var log = console.log; // eslint-disable-line

log('Let\'s figure out what prototype is.');

!(function () {
    log('--------------------------course one----------------------------');
    // define a function
    var Func = function () {
        // user this
        this.thisAttr = 'this is thisAttr';
    };
    Func.prototype.protoAttr = 'this is protoAttr';
    // create a instance
    var funcInst = new Func();

    // point 1
    for (var name in funcInst) {
        log(name + ' : ' + funcInst[name]);
    }
})();

!(function () {
    log('--------------------------course two----------------------------');
    // define a function
    var Func = function () {
        // user this
        this.attr = 'this is thisAttr';
    };
    Func.prototype.attr = 'this is protoAttr';
    Func.prototype.specialAttr = 'this is protoSpecialAttr';
    // create a instance
    var funcInst = new Func();

    // point 2: 当访问对象的一个属性时, 首先查找对象本身, 找到则返回; 若不, 则查找基引用指向的对象的属性(如果还找不到实际上还会沿着原型链向上查找,  直至到根)

    log(funcInst.attr);
    log(funcInst.specialAttr);
})();

!(function () {
    log('--------------------------course three----------------------------');
    // define people
    var People = function () {
        this.name = 'no name';
    };
    People.prototype.principle = 'be nice';
    // create a instance
    var david = new People();
    var john = new People();

    // point 3: 原型是所有对象共有的
    log(david);
    log(john);

    // If I want to change all people's principle, I just need to do this:
    People.prototype.principle = 'be bad';
    log(david);
    log(john);

    // If I want to change all people's name, I need to do it one by one.
    david.name = 'david';
    john.name = 'john';
    log(david);
    log(john);
})();

!(function () {
    log('--------------------------course four----------------------------');
    // define people
    var People = function () {
        this.name = 'no name';
    };
    People.prototype.principle = 'be nice';

    // define man
    var Man = function () {
        this.gender = 'male';
    };

    Man.prototype = new People();
    Man.constructor = Man;
    Man.prototype.manPrinciple = 'be gentle';

    // point 3: 除了能修改prototype指向的对象, 还能修改prototype指向哪一个对象, 即为prototype赋予一个不同的对象. 这可以实现一种简单的继承
    var man = new Man();
    log(man);
})();

// class Man, private attr name , public method getName
// way1 : prototype
var Man = function () {
    var name = 'junyu';
    this.getName = function () { // privilege method
        return name;
    };
};
// way2 : closure.
var Man = (function () {
    var name = 'hello!'; // static
    var Test = function () {
        name = 'hello';
    };
    Test.prototype.setName = function (n) {
        name = n;
    };
})();
