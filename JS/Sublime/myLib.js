let tasks = [];
let fs = require('fs');

tasks.push(function(){
	var temp = fs.readFileSync("./myFile.txt", "utf8")
	let arr = JSON.parse("[" + temp + "]");
	console.log(arr);

})
tasks.push(function(){
	var temp = fs.readFileSync("./myFile.txt", "utf8")
	let arr = JSON.parse("[" + temp + "]");
	console.log(Object.keys(arr));
	
})

module.exports = tasks;
