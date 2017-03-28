var log = console.log; // eslint-disable-line

function replaceText (text) {
    return text.replace(/[A-Z]/g, function (word) {
        return word.toLowerCase();
    });
}

var testCase = ['uwqyeuwdkaldhCDAD', 'dadsadsadsadsa', 'DDDDDEQDAFSAFS', 'DSADSA', '0'];
testCase.forEach(function (text) {
    log(replaceText(text));
});

function findHead (text) {
    var reg = /\<head\>(.*?)\<\/head\>/;
    var result = reg.exec(text);
    return result[1];
}
var testHead = 'dsadsafdsafsfdsaafds<head>to be strong</head>dsadsaffsdfdsaf';
log(findHead(testHead));

var myString = 'something format_abc';
var myRegexp = /(?:^|\s)format_(.*?)(?:\s|$)/g;
var match = myRegexp.exec(myString);
log(match);
