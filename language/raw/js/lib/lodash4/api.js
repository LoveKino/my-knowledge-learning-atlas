/**
 * study the api of lodash
 */
var _ = require('lodash');

var log = console.log; // eslint-disable-line

/**
 * array part
 */

/**
 * chunk
 * group list by size
 * ([a], int) -> [[a]]
 */
log(
    _.chunk([1, 2, 3, 4, 5], 2) // [[1, 2], [3, 4], 5]
);

/**
 * compact
 * create a new list which removed falsey values from the old list
 * [a] -> [a]
 *
 * falsey value: false null 0 '' undefined NaN
 */
log(
    _.compact([4, 2, '', '1', 0, null, 89, NaN]) // [4, 2, '1', 89]
);

/**
 * concat
 * ([a], ...) -> [a]
 */
log(
    _.concat([1], [2, 3], [
        [4]
    ]) // [1, 2, 3, [4]]
);

/**
 * difference
 * ([a], [b]) -> [a]
 */
log(
    _.difference([3, 2, 1], [4, 2]) // [3, 1]
);

/**
 * differenceBy
 */
log(
    _.differenceBy([3.1, 2.2, 1.3], [4.4, 2.5], Math.floor), // [3.1, 1.3]
    _.differenceBy([{
        x: 2
    }, {
        x: 1
    }], [{
        x: 1
    }], 'x') // [{x: 2}]
);

/**
 * compareWith
 */
log(
    _.differenceWith([{
        x: 1,
        y: 2
    }, {
        x: 2,
        y: 1
    }], [{
        x: 1,
        y: 2
    }], _.isEqual) //[{x: 2, y: 1}]
);

/**
 * drop
 *      [a], int -> [a]
 * dropRight
 *      [a], int -> [a]
 * dropRightWhile
 *      [a], obejct|string|function -> [a]
 *
 * dropWhile
 */
log(
    _.drop([1, 2, 3]), // [2, 3]
    _.drop([1, 2, 3], 2), // [3]
    _.drop([1, 2, 3], 5), // []
    _.drop([1, 2, 3], 0), // [1, 2, 3]

    _.dropRight([1, 2, 3]), // [1, 2]
    _.dropRight([1, 2, 3], 2), // [1]

    _.dropRightWhile([1, 2, 3, 4], x => x > 3) // [1, 2, 3]
);

/**
 * fill
 * array, value, [start=0], [end=array.length]
 */
log(
    _.fill([1, 2, 3], 'a'), // ['a', 'a', 'a']
    _.fill([4, 6, 8, 10], '*', 1, 3) // [4, '*', '*', 10]
);

/**
 * findIndex findLastIndex find
 */
log(
    _.findIndex([1, 2, 3, 4, 5], v => v === 3), // 2
    _.findIndex([1, 2, 3, 4, 5], v => v === 9), // -1
    _.findLastIndex([1, 2, 3, 3], v => v === 3) // 3
);

/**
 * flatten
 * flattenDeep
 * flattenDepth
 */
log(
    _.flatten([1, [2, [3, [4]], 5]]), // [1, 2, [3, [4]], 5]
    _.flattenDeep([1, [2, [3, [4]], 5]]), // [1, 2, 3, 4, 5]
    _.flattenDepth([1, [2, [3, [4]], 5], 1]),
    _.flattenDepth([1, [2, [3, [4]], 5], 2])
);

/**
 * fromPairs
 */
log(
    _.fromPairs([
        ['a', 10],
        ['b', 10]
    ]) // {a: 10, b: 10}
);

/**
 * head initial tail last
 * take takeRight
 * takeRightWhile
 *  array [predicate=_.identity]
 * takeWhile
 *  array [predicate=_.identity]
 */
log(
    _.head([1, 2, 3]), // 1
    _.head([]), // undefined TODO
    _.initial([1, 2, 3]),
    _.last([1, 2, 3]),
    _.tail([1, 2, 3]),
    _.take([1, 2, 3]),
    _.take([1, 2, 3], 2),
    _.take([1, 2, 3], 5)
);

/**
 * indexOf
 * array, value, [fromIndex=0]
 * lastIndexOf
 * array, value, [fromIndex=array.length-1]
 */
log(
    _.indexOf([1, 2, 1, 2], 2),
    _.indexOf([1, 2, 1, 2], 2, 2),
    _.lastIndexOf([1, 2, 1, 2], 2),
    _.lastIndexOf([1, 2, 1, 2], 2, 2)
);

/**
 * intersection
 * intersectionBy
 *      [arrays], [iteratee=_.identity]
 * intersectionWith
 *      [arrays], [comparator]
 */
log(
    _.intersection([2, 1], [4, 2], [1, 2]),
    _.intersectionBy([2.1, 1, 2], [4.2, 2.8], Math.floor),
    _.intersectionWith([{
        x: 1,
        y: 2
    }, {
        x: 2,
        y: 1
    }], [{
        x: 1,
        y: 1
    }, {
        x: 1,
        y: 2
    }], _.isEqual)
);

/**
 * join
 */
log(
    _.join(['a', 'b', 'c'], '~')
);

/**
 * pull pullAll pullAllBy pullAllWith pullAt
 * will change the array
 *
 * pullAllBy
 *      array values [iteratee=_.identity]
 *
 * pullAllWith
 *      array values [comparator]
 */
log(
    _.pull([1, 2, 3, 1, 2, 3], 2, 3),
    _.pullAll([1, 2, 3, 1, 2, 3], [2, 3]),
    _.pullAllBy([{
        x: 1
    }, {
        x: 2
    }, {
        x: 3
    }, {
        x: 1
    }], [{
        x: 1
    }, {
        x: 2
    }], 'x'),
    _.pullAllWith([{
        x: 1
    }, {
        x: 2
    }, {
        x: 3
    }, {
        x: 1
    }], [{
        x: 1
    }, {
        x: 2
    }], _.isEqual),
    _.pullAt([5, 10, 15, 20], 1, 3)
);

/**
 * remove
 */
log();

/**
 * remove reverse
 * mute array
 *
 * slice sortedIndex sortedIndexBy
 * sortedIndexOf
 * sortedLastIndex sortedLastIndexBy sortedLastIndexOf
 * sortUniq
 * sortedUniqBy
 */
log(
    _.reverse([1, 2, 3]),
    _.remove([1, 2, 3, 4], v => v % 2 === 0),
    _.slice([1, 2, 3], 1, 2),
    _.sortedIndex([30, 50], 40),
    _.sortedIndex([4, 5], 4),
    _.sortedUniq([1, 1, 2])
);

/**
 * union
 * unionBy
 * unionWith
 */
log(
    _.union([2, 1], [4, 2])
);

/**
 * uniq
 * uniqBy
 * uniqWith
 * without
 */
log(
    _.uniq([2, 1, 2]),
    _.without([1, 2, 1, 3], 1, 2)
);

/**
 * zip zipObject zipObjectDeep
 * zipWith
 * unzip
 *
 * unzipWith
 */
log(
    _.zip([1, 4], [2, 5], [3, 6]),
    _.zipObject(['a', 'b'], [1, 2]),
    _.zipObjectDeep(['a.b[0].c', 'a.b[1].d'], [1, 2]),
    _.zipWith([1, 2], [10, 20], [100, 200], (a, b, c) => a + b + c),
    _.unzip([
        [1, 2, 3],
        [4, 5, 6]
    ]),
    _.unzipWith([
        [1, 10, 100],
        [2, 20, 200]
    ], _.add)
);

/**
 * xor
 * xorBy
 * xorWith
 */
log(
    _.xor([2, 1], [4, 2])
);


/**
 * collection part
 */

/**
 * countBy
 * every
 * filter
 * find
 * findLast
 * flatMap
 * forEach
 * forEachRight
 * groupBy
 * includes
 *      collection, value, [fromIndex=0]
 * invokeMap
 * keyBy
 * map
 * orderBy
 * partition
 * reduce
 * reduceRight
 * reject
 * sample
 * sampleSize
 * shuffle
 * size
 * some
 * sortBy
 */
log(
    _.countBy([6.1, 4.2, 6.3], Math.floor),
    _.flatMap([1, 2], v => [v, v]),
    _.groupBy([6.1, 4.2, 6.3], Math.floor),
    _.invokeMap([123, 456], String.prototype.split, ''),
    _.orderBy([{
        'user': 'fred',
        'age': 48
    }, {
        'user': 'barney',
        'age': 34
    }, {
        'user': 'fred',
        'age': 42
    }, {
        'user': 'barney',
        'age': 36
    }], ['user', 'age'], ['asc', 'desc']),
    _.partition([1, 2, 3, 4], v => v > 3),
    _.sample([1, 2, 3, 4]),
    _.sampleSize([1, 2, 3], 2),
    _.shuffle([1, 2, 3, 4])
);

/**
 * Date part
 */

/**
 * now()
 */
log(
    _.now()
);

/**
 * function part
 */

/**
 * after
 * ary
 * before
 * bind
 * bindKey
 * curry
 * curryRight
 * debounce
 * defer
 * delay
 * flip
 * memoize
 * negate
 * once
 */
(() => {
    var f1 = _.after(2, () => log('done'));
    f1();
    f1();
})();
log(
    _.map(['6', '8', '10'], _.ary(parseInt, 1)), (_.bind(function (v, v2) {
        return v + v2 + this.c;
    }, {
        c: 10
    }, 100))(9),

    (_.flip(function () {
        return _.toArray(arguments);
    }))('a', 'b', 'c')
);
