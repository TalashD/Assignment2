// JavaScript : Calculate the multiplication of an array
function multiplier(arr) {
	let total = 1;
	for (let num of arr) {
		total *= num;
	}
	return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = multiplier(numbers);
console.log("Multiplication of Array in JavaScript:", result);
