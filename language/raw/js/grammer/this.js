var log = console.log; // eslint-disable-line

//prototype function execute
var Game = function (name, type) {
    this.type = type;
    this.name = name;
};

Game.prototype = {
    getName: function () {
        return this.name;
    },
    getType: function () {
        return this.type;
    },
    toDiscrible: function () {
        var text = 'This is ' + this.getType() + ' game,' + 'we called it ' + this.getName();
        log(text);
    }
};

var xianjian = new Game('xianjian', 'RPG');
xianjian.toDiscrible();

//object property execute
var yueqi = {
    name: 'yueqi',
    weapon: 'sword',
    hp: 300,
    onAttacked: function () {
        var hurtNum = Math.ceil(Math.random() * 100);
        this.hp = this.hp - hurtNum;
        log('Affected ' + hurtNum + ' damage , now hp is ' + this.hp);
    },
    attack: function (enemy) {
        var hurtNum = Math.ceil(Math.random() * 150);
        log(this.name + ' use ' + this.weapon + ' attack ' + enemy + ' ' + hurtNum + ' damage.');
    }
};

yueqi.attack('monster');
yueqi.onAttacked();

//nomal function execute
var yuejinzhao = function () {
    var name = 'yuejinzhao';
    var weapon = 'double sword';

    function attack (enemy) {
        var hurtNum = Math.ceil(Math.random() * 150);
        log(name + ' use ' + weapon + ' attack ' + enemy + ' ' + hurtNum + ' damage.');
    }
    return {
        attack: attack
    };
}();

yuejinzhao.attack('evil');

//apply,call
var gujian = function () {
    Game.apply(this, arguments);
};

var gujianinst = new gujian('gujian', 'rpg');
log(gujianinst);
