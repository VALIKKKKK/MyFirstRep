module.exports.accumalate = function(arr, first, last, value){
	for(;first != last; ++first)
	{
		value += arr[first];
	}
	return value;
}
module.exports.accumalate1 = function(arr, first, last, value, binaryOp){
	for(;first != last; ++first)
	{

		value = binaryOp(value, arr[first]);
	}
	return value;
}
