// Import the prompt-sync module
const prompt = require('prompt-sync')();

// Prompt the user to enter a number
const userInput = prompt('Enter a number: ');

// Convert the input to a number
const number = parseFloat(userInput);

// Check if the number is positive, negative, or zero
if (number > 0) {
    console.log('The number is positive');
} else if (number < 0) {
    console.log('The number is negative');
} else if (number === 0) {
    console.log('The number is zero');
} else {
    console.log('Invalid input, please enter a valid number');
}
