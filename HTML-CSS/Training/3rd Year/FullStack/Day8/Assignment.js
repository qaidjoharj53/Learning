//JavaScript Assignment

// 1. Basic Function
function sayHello() {
    return "Hello, World!";
}

// 2. Function with Parameters
function doubleNumber(num) {
    return num * 2;
}

// 3. Simple Return Function
function addTwoNumbers(num1, num2) {
    return num1 + num2;
}

// 4. Arrow Function
const doubleNumberArrow = (num) => num * 2;

// 5. Arithmetic Operator
function subtractTen(num) {
    return num - 10;
}

// 6. Comparison Operator
function isGreaterThanFive(num) {
    return num > 5;
}

// 7. Logical Operator
function isBetweenOneAndTen(num) {
    return num >= 1 && num <= 10;
}


// 8. If-Else Statement
function isEven(num) {
    if (num % 2 === 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

// Example Outputs for testing
console.log(sayHello()); // "Hello, World!"
console.log(doubleNumber(4)); // 8
console.log(addTwoNumbers(5, 7)); // 12
console.log(doubleNumberArrow(4)); // 8
console.log(subtractTen(20)); // 10
console.log(isGreaterThanFive(7)); // true
console.log(isBetweenOneAndTen(5)); // true
console.log(isEven(10)); // "Even"
console.log(isEven(11)); // "Odd"
