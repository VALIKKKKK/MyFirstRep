class MyObject{
	constructor(a,b){
		this.a = a;
		this.b = b;
	}
}
let algorithm = require("./algorithm")
let tasks = require("./myLib");
let fs = require('fs');
let text = "Iadsads";
/*fs.writeFile("./myFile.txt", text, function(err){
	if(err)
	{
		console.log("err");
	}
});*/
let temp = fs.readFileSync("./myFile.txt", "utf8");
let arr = JSON.parse("[" + temp + "]");
//console.log(arr);
let object = {"a" : 4, "b" : 5};
let object1 = new MyObject(4,5);
let arr1 = [temp];
//tasks[0]();
let result = algorithm.accumalate(arr, 0, arr.length, 0);
//console.log(result);
tasks[1]();
//console.log(arr1);
