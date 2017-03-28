print("hello world!")

// let - constant, var - variable
var myVariable = 42
myVariable = 50

let myConstant = 42

// type
let explicitDouble: Double = 70


// Values are never implicitly converted to another type.
let label = "The width is "
let width = 94
let widthLabel = label + String(width)

// /()
let apples = 3
let oranges = 5
let appleSummary = "I have \(apples) apples";
let fruitSummary = "I have \(apples + oranges) pieces of fruit";

// array
var shoppingList = ["catfish", "water", "tulips", "blue paint"];
shoppingList[1] = "bottle of water";
print(shoppingList)

// dictionary
var occupations = [
    "Malcolm": "Captain",
    "Keylee": "Mechanic",
]
occupations["Jayne"] = "Public Relations"
print(occupations)

// empty
let emptyArray = [String]()
let emptyDictionary = [String: Float]()

//
shoppingList = [];
occupations = [:];


// for if
let individualScores = [75, 43, 103, 87, 12]
var teamScore = 0
for score in individualScores {
    if score > 50 {
        teamScore += 3
    } else {
        teamScore += 1
    }
}

print(teamScore)


// ?
var optionalString: String? = "option"
print(optionalString == nil)

var optionalName: String? = nil
var greeting = "Hello!"

if let name = optionalName {
    greeting = "Hello, \(name)"
} else {
    greeting = "just hello."
}

// ??
let nickName: String? = nil
let fullName: String = "ddchen"

let informalGreeting = "Hi \(nickName ?? fullName)"

// switch case
let vegetable = "red pepper"

switch vegetable {
    case "celery":
        
        print("celery")
    
    case "cucumber", "watercress":
    
        print("cucumber, watercress")
    
    case let x where x.hasSuffix("pepper"):
    
        print("pepper \(x)?")
    
    default:
    
        print("Everything tastes good in soup.")
}

// for dictionary
let interestingNumber = [
    "Prime": [2, 3, 5, 7, 11, 13],
    "Fibonacci": [1, 1, 2, 3, 5, 8],
    "Square": [1, 4, 9, 16, 25]
]


var largest = 0
var largestKind:String? = nil

for (kind, numbers) in interestingNumber {
    for number in numbers {
        if number > largest {
            largest = number
            largestKind = kind
        }
    }
}
print(largest)
print(largestKind)

// while repeat-while

var n = 2

while n < 100 {
    n = n * 2
}


print(n)

var m = 2

repeat {

    m = m * 2

} while m < 100

print(m)

// ..<
var firstForLoop = 0
let loopTimes:Int = 4
for i in 0 ..< loopTimes {
    firstForLoop += i
}

print(firstForLoop)

var secondForLoop = 0
for var i=0;i < 4;i++ {
    secondForLoop += i
}
print(secondForLoop)

// ...
var thirdForLoop = 0
for i in 0...4 {
    thirdForLoop += i
}
print(thirdForLoop)

// function

func greet(name: String, day: String) -> String {
    return "Hello \(name), today is \(day)."
}

greet("Bob", day: "Tuesday")

// tuples

func calculateStatistics(scores: [Int]) -> (min: Int, max: Int, sum: Int) {
    var min = scores[0];
    var max = scores[0];
    var sum = 0;
    
    for score in scores {
        if score > max {
            max = score
        } else {
            min = score
        }
        sum += score
    }
    
    return (min, max, sum)
}

let statistics = calculateStatistics([5, 3, 100, 3, 9])

print(statistics.sum)

print(statistics.2)

func sumOf(numbers: Int...) -> Int {
    var sum = 0
    for number in numbers {
        sum += number
    }
    return sum
}

sumOf()
sumOf(42, 597, 12)

// inner functions

func returnFifteen() -> Int {
    var y = 10
    func add() {
        y += 5
    }
    add()
    return y
}

returnFifteen()


// closure

func makeIncrementer () -> ((Int) -> Int) {
    
    func addOne(number: Int) -> Int {
        
        return 1 + number
    
    }
    
    return addOne
}

var increment = makeIncrementer()

increment(7)

//

func hasAnyMatches(list: [Int], condition: (Int) -> Bool) -> Bool {
    
    for item in list {
        if condition(item) {
            return true
        }
    }
    return false
}

func lessThanTen(number: Int) -> Bool {
    return number < 10
}

var numbers = [20, 19, 7, 12]

hasAnyMatches(numbers, condition: lessThanTen)



// closure

var clsr = [1, 2, 3, 4].map({
    (number: Int) -> Int in
    
    if number % 2 == 1 {
        return 0
    }
    return 1
})

print(clsr);

var mapNum = [3, 4].map({ number in 3 * number });

print(mapNum)


let sortedNumbers = [5, 6].sort {$0 > $1}

print(sortedNumbers)


// class
class Shape {
    
    var numberOfSides = 0
    
    func simpleDescription () -> String {
        return "A shape with \(numberOfSides) sides."
    }
    
}

var shape = Shape()
shape.numberOfSides = 7

var shapeDesc = shape.simpleDescription()

print(shapeDesc)



class NamedShape {
    
    var numberOfSides: Int = 0
    
    var name: String
    
    init(name: String) {
        self.name = name
    }
    
    func test () -> () {
        
        print("\(self.numberOfSides)")
    
    }
    
}

class Square: NamedShape {
    
    var sideLength: Double
    
    init(sideLength: Double, name: String) {
        
        self.sideLength = sideLength
        
        super.init(name:name)
        
        numberOfSides = 4
        
    }
    override func test () -> () {
        print("\(self.sideLength)");
    }
    
}

var square = Square(sideLength: 4.0, name: "square")


square.test()


class EquilateralTriangle: NamedShape {
    
    var sideLength: Double
    
    init(sideLength: Double, name: String) {
        self.sideLength = sideLength
        super.init(name: name);
        numberOfSides = 3
    }
    
    var perimeter: Double {
        get {
            return 3.0 * sideLength
        }
        
        set {
            sideLength = newValue / 3.0
        }
    }
    
    override func test() -> () {
        print("\(self.sideLength)")
    }
}

var triangle = EquilateralTriangle(sideLength: 3.1, name: "triangle")

print(triangle.perimeter)

triangle.perimeter = 9.9

print(triangle.sideLength)


// willSet run before setting a new value
// didSet run after setting a new value
class TriangleAndSquare {
    
    var triangle: EquilateralTriangle {
        willSet {
            square.sideLength = newValue.sideLength
        }
    }
    
    var square: Square {
        willSet {
            triangle.sideLength = newValue.sideLength
        }
    }
    
    init(size: Double, name: String) {
        square = Square(sideLength: size, name:name)
        
        triangle = EquilateralTriangle(sideLength: size, name: name)
    }
}

var triangleAndSquare = TriangleAndSquare(size: 10, name: "another test shape")

print(triangleAndSquare.square.sideLength)

print(triangleAndSquare.triangle.sideLength)

triangleAndSquare.square = Square(sideLength: 50, name: "larger square")

print(triangleAndSquare.triangle.sideLength)


// ?
var optionalValue:Dictionary? = [
    "good": [1, 2, 3, 5]
];

let okGetIt = (optionalValue?["good"]![2])! + 1

print(okGetIt)

optionalValue = nil

let okGetIt2 = optionalValue?["good"]

print(optionalValue)

//

enum Rank: Int {
    
    case Ace = 100
    
    case Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten
    
    case Jack, Queen, King
    
    func simpleDescription() -> String {
        
        switch self {
            
        case .Ace:
            
            return "ace"
            
        case .Jack:
            
            return "jack"
            
        default:
            
            return String(self.rawValue)
        }
        
    }
    
    func compare (other: Rank) -> Bool {
        return self.rawValue > other.rawValue
    }
    
}

let ace = Rank.Ace

let aceRawValue = ace.rawValue

ace.simpleDescription()

let queen = Rank.Queen

let queenRawValue = queen.rawValue

queen.compare(ace)

if let convertedRank = Rank(rawValue: 3) {
    let threeDescription = convertedRank.simpleDescription()
}


enum Suit: String {

    case Spades, Hearts, Diamonds, Clubs
    
    func simpleDescription() -> String {
        switch self {
        case .Spades:
            return "spades"
        case .Hearts:
            return "hearts"
        case .Diamonds:
            return "diamonds"
        case .Clubs:
            return "clubs"
        }
    }
    
}


let hearts = Suit.Hearts

print(hearts.rawValue)

let heartsDescription = hearts.simpleDescription()


// struct

struct Card {
    
    var rank: Rank
    
    var suit: Suit
    
    func simpleDescription() -> String {
        return "The \(rank.simpleDescription()) of \(suit.simpleDescription())"
    }
    
}

let card = Card(rank:.Three, suit:.Hearts)

card.simpleDescription()

//

enum ServerResponse {
    
    case Result(String, String)
    
    case Error(String)
    
}


let success = ServerResponse.Result("6:00 am", "8:09 pm")

let failure = ServerResponse.Error("Out of cheese.")


switch success {
case let .Result(sunrise, sunset):
    print("Sunrise is at \(sunrise) and sunset is at \(sunset).")
case let .Error(error):
    print("Failure... \(error)")
}

// protocol

protocol ExampleProtocol {
    
    var simpleDescription: String { get }
    
    mutating func adjust()
    
}

class SimpleClass: ExampleProtocol {
    var simpleDescription: String = "A very simple class."
    var anotherProperty: Int = 78932
    
    func adjust() {
        simpleDescription += " Now 100% adjusted."
    }
}

var simpleInst = SimpleClass()

simpleInst.adjust()

let aDesc = simpleInst.simpleDescription;



struct SimpleStructure: ExampleProtocol {
    var simpleDescription: String = "A very simple structure."
    
    mutating func adjust() {
        simpleDescription += " Now 100% adjusted."
    }
}

var b = SimpleStructure()

b.adjust()

let bDesc = b.simpleDescription

extension Int: ExampleProtocol {
    var simpleDescription: String {
        return "The number \(self)"
    }
    
    mutating func adjust() {
        self += 42
    }
}

print(7.simpleDescription)


let protocolValue: ExampleProtocol = simpleInst

print(protocolValue.simpleDescription)


// generic <>

func repeatItem<Item>(item: Item, numberOfTimes: Int)
    
        -> [Item] {
    
    var result = [Item]()
    
    for _ in 0..<numberOfTimes {
        
        result.append(item)
        
    }
    
    return result
}


repeatItem("knock", numberOfTimes: 4)

enum OptionalValue<Wrapped> {

    case None
    
    case some(Wrapped)
    
}


var possibleInteger: OptionalValue<Int> = .None

possibleInteger = .some(100)


func anyCommonElements <T: SequenceType, U: SequenceType where T.Generator.Element: Equatable, T.Generator.Element == U.Generator.Element> (lhs: T, _ rhs: U) ->

    Bool {
        for lhsItem in lhs {
            
            for rhsItem in rhs {
                
                if lhsItem == rhsItem {
                    return true
                }
                
            }
            
        }
        
        return false
}


anyCommonElements([1, 2, 3], [3])

// import

import UIKit

let redSquare = UIView(frame: CGRect(x: 0, y: 0, width: 44, height: 44))

redSquare.backgroundColor = UIColor.redColor()