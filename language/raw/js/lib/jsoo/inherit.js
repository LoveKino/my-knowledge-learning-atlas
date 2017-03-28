/*********************************************************
 * 继承机制的实现
 ********************************************************/
var Inherit = function () {};

Inherit.extend = function (child, parent) {
    var F = function () {};
    F.prototype = parent.prototype;
    child.prototype = new F();
    child.prototype.constructor = child;
    child.uber = parent.prototype;
};
