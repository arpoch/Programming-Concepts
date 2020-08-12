//53 bit integer
let x = 5; // base-10
console.log(x);
let y = 0xA; //base-16
console.log(y);
let z = 0b101 //base 2
console.log(z);
let p = 0o377 //base 8
console.log(p);
//64 bit floating point format
let q = .33333333333;
console.log(q);
let r = 6.4765E-2; //exponential notation
console.log(r);
//Positive Infinity
let num=Infinity;
console.log(num);
console.log(Number.POSITIVE_INFINITY);
console.log(1/0);
console.log(Number.MAX_VALUE*2);
//Negative Infinity
num = -Infinity;
console.log(num);
console.log(-Number.POSITIVE_INFINITY);
console.log(-1/0);
console.log(-Number.MAX_VALUE*2);
//NAN
console.log(0/0);
console.log(Infinity/Infinity);
//exponentiation
console.log(2**53);
//BigInt
console.log(BigInt(Number.MAX_SAFE_INTEGER));
console.log(123n+12n);
console.log(0x8000000000000000n);
//console.log(123n+12); Error 'Cannot mix BigInt and other types, use explicit conversions'
//Date time
let timestamp =  Date.now();
console.log(timestamp); //number
timestamp = new Date();
console.log(timestamp.getTime());   //number
console.log(timestamp.toISOString());