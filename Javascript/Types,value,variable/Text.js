//String literals
console.log("");
console.log("testing");
console.log("It's nice seeing you again!");
console.log(`"She said 'hi'",he said`);
console.log('one\
line');
console.log(`first line
second line`);
//Escape sequences
console.log('two\nline');
console.log("\u{1f600}")
let name = "Harshit";
console.log(name.length);
console.log("Hello "+name);
//Template Literals
console.log(`Hell0 ${name}.`);
msg = `Hell0 ${name}.`;
console.log(msg.length);
//Tagged Template literals
console.log(`\n`.length);
console.log `\n`;
//REGEPX
let pattern = /\d+/g;   //g=group
let text = "test 1, 2, 3";
console.log(text.match(pattern));
//Boolean
console.log((1===0));
console.log((1===0).toString());
