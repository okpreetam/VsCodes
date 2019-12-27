/* eslint-disable no-unused-vars */
/* eslint-disable node/no-unsupported-features/node-builtins */
/* eslint-disable no-alert */
// alert(125);

console.time("got it");
console.log("lol");
console.log(162526);
console.log("loc");
console.log("dovjpo");
let lol;
console.time(lol);
console.log(true);
console.log([1, 656, 59, 66]);
console.log({ a: 56, b: 56 });
console.log("sine");
console.log("got it");
console.timeEnd(lol);
console.table({ a: 1, bf: 43 });

const greets = "hellooo";
console.log(greets);

// types of variable var,const,let

const popat = "nmuna";
console.log(popat);

// variable start with letter, _,$
// cannot start with number

// Multi word vars

const FirstName = "lol"; // Pascal case

// Const

const name = "john";
console.log(name);
// can not reassign
// name = "sara";

// We have to assign a value
// const notso; not work

// object works

const person = {
  name: "John",
  age: 30
};

person.name = "Sarah";
person.age = 26;
console.log(person);

// Arrays:

const number = [1, 2, 3, 4, 5, 6];

number.push(490);

console.log(number);

console.error("This is Error");
console.clear();
console.warn(" Not Yet");

console.time("lola");
console.error("This is Error");
console.warn(" Not Yet");
console.timeEnd("lola");

// let -> reassing possible

let itsmeee;
itsmeee = 59;
console.log(itsmeee);
itsmeee = "hiuh";
console.log(itsmeee);

/*= ===== Data Types and Variables====== */

// 7 diff data type: undefned, null, boolean, string
// number and objects

// three ways, var,let,const

// var : use out through out hole program
// let: only used where decleare
// const : we never change it

/*= ===== storing values with Assingment operator==== */

// semicolon not necissary to put at end but it good practice
// to use it

let a;
console.log(a); // undefined
console.log("koka");

/*= ==Initializing Variables/ Assingment operator=== */

let c = "lol";
c += "mate"; // OMG
console.log(c);

/*= ====Case sensitivity in Variables======== */

const okman = "cool";
const Okman = "idgaf";

console.log(Okman);
console.log(okman);

// Divide

const quotient = 66 / 0; // print infinity
console.log(quotient);
// const quotient = 66 / 79; //Error
const Quotient = 66 / 79;
console.log(quotient);

let myVar = 87;
myVar += 1;
myVar++;
console.log(myVar);

myVar--;
console.log(myVar);

let remainder;
remainder = 11 % 3;

console.log(remainder);

// "Alan" ---------> it is an string literals

/* ====== Escaping Literal Quotes in Strings====== */
const myStr = 'I am a "double quoted" string inside "double quoted" string';
console.log(myStr);
// var myStr="I am a \"double quoted\" string inside \"double quoted\" string";

const myStr2 = `I am a "double quoted" string' inside' "double quoted" string"`;
// For printing ' aswellas " in string we use ``````````(bacl tics)
console.log(myStr2);

/*= =========Escape sequence====== */
/** *
CODE OUPTPUT
\'   sinlge quote
\"   double quote
\\   backslash
\n   newline
\r   carriage return
\t   tab
\b   backspace
\f   form feed
*** */

const myStr3 = "FirstLine\n\t lolmate\bok"; // Gottcha;

console.log(myStr3);

//  Awosome /b delete the last character from output

// Concatenating Strings with Plus Operaltors

const noobi = "my word" + " is to dum";
console.log(noobi);

/*= ====== Find Length of String ======== */

console.log(noobi.length);

const len = noobi.length;

console.log(len);

/* Bracket Notation to Find */
/* First Character in string */

console.log(noobi[0]);

console.timeEnd("got it");

/*= =========== String Imutability ========== */

let str0 = "cool";
str0[0] = "j";
// imutable :( We cant change single
// character of string

console.log(str0);

str0 = "lololololookgh";

console.log(str0);
console.log(str0[str0.length - 1]); // to print last character

// word blanks

function wordBlanks(myNoun, myAdjective) {
  const result = `The ${myAdjective} ${myNoun}`;
  // Also var result = "The " + myAdjective +" "+ myNoun;
  return result;
}

console.log(wordBlanks("boom chick", "boom"));

/* Store multiple values with Array */

let ourArray = ["cool", 89];
console.log(ourArray);

/* nested array */

ourArray = ["cool", ["fone", "you have to kill it"]];
console.log(ourArray);

// Use Can Replace a Single Element in Array but not in String

ourArray[0] = "lool";
console.log(ourArray); // Done

const multiDemArray = [
  [8989, 7889, 89],
  [78, 567, 98],
  [234, 54, 567]
];
console.log(multiDemArray[0][0]);
console.log(" ");
// Manipulate Array with Push Function

ourArray.push(["happ", 90, "fine"]);
ourArray.push(6464654);
console.log(ourArray);

// Remove an Item With POP function
console.log(" ");
ourArray.pop();
console.log(ourArray);
console.log(" ");

// Remove first Element of Array
ourArray.shift();
console.log(ourArray);

// Add Element in front
ourArray.unshift("Dhinchak pooja");
console.log(`\n${ourArray}`); // Print Array as string COOOOOOOOOOOOL
// Also console.log("\n" + ourArray);

/** *******Globe Scope and function************* */
// Declare your variable here
const myGlobal = 10;

function fun1() {
  // Assign 5 to oops Global Here
  oopsGlobal = 5;
  // until not define it is an global variable
  // not a local variable
  // if we put var oopsGlobal then it is locall variable
}

// only change code above this line
function fun2() {
  let output = "";
  if (typeof myGlobal !== "undefined") {
    output += `myGlobal: ${myGlobal}`;
  }
  if (typeof oopsGlobal !== "undefined") {
    output += ` oopsGlobal: ${oopsGlobal}`;
  }
  console.log(output);
}

fun1();
fun2();

/** *******Local scope And Functions********** */
function myLocalscope() {
  const mylocalVar = 5;
  console.log(mylocalVar);
}

myLocalscope();

// console.log(mylocalVar);  //Give error myVar not defined

/** *************GLobal Vs Local Scope in function***************** */

const outerWear = "T-shirt";

function myOutfit() {
  const outerWear = "sweater";
  return outerWear;
}

console.log(myOutfit());
console.log(outerWear);

// ////////////////////////////
function minus(num) {
  return num - 7;
}

console.log(minus(90));

// Understanding Undefined Value Returned from a Function

let sum = 0;

function addthree() {
  sum += 3;
}

console.log(addthree()); // undefined because we returned Nothing

// Stand in line

function nextinline(arr, Item) {
  arr.push(Item);
  return arr.shift();
}

const testarr = [1, 56, 65, 89, 73];

console.log(`Before ${testarr}`);
console.log(nextinline(testarr, 533));
console.log(`After ${testarr}\n`);

console.log(`Before ${JSON.stringify(testarr)}`);
// JSON a way to change an array to string
console.log(nextinline(testarr, 485));
console.log(`After ${JSON.stringify(testarr)}\n`);

function welcometobool() {
  return true;
}

// Comparison with the Strictly Eqality Operator
// LOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOL

/* 
3 === 3 evalutes to true
3 === '3' false

but in case of is equal to
3 == 3 true
3 =='3' true
*/

function iseq(oligopoly) {
  if (oligopoly !== 12) {
    return "not equal";
  }
  return "equal";
}

console.log(iseq("12")); // GOT it man

// Switch Statements cases are strictly equal to

function testSwitch(val5) {
  let answer = "";
  switch (val5) {
    case 1:
      answer = "ok1";
      break;
    case 2:
      answer = "ok2";
      break;
    default:
      answer = "better LNT";
  }

  return answer;
}

console.log(testSwitch(5));

// Multiple Identical options in switch statements

function testSwi(val5) {
  let answer = "";
  switch (val5) {
    case "no":
    case "no1":
      answer = "ok2";
      break;
    case "yes":
    case "yes1":
      answer = "ok3";
      break;
    default:
      answer = "better LNT";
  }

  return answer;
}

console.log(testSwi("yes"));

// Build javascript objects

// objects are similar to arrays
// exept we use properties to access data instead of ndexes

const ourDog = {
  name: "lula",
  legs: 4,
  tails: 0 / 0,
  friends: ["everything"]
};
// properties can be anytype of data types

const myDog = {
  name: "Quincy",
  fav: "lula",
  legs: 4,
  tails: 0 / 0,
  friends: []
};

// Accessing Object Properties with dot Notation

console.log(myDog.friends);

// beside . notation we can also use
// bracket notation to acces a property in object
// used when we have space in property

const myCat = {
  "cat name": "Quincy",
  fav: "lula",
  legs: 4,
  tails: 0 / 0,
  friends: ["no one"]
};

console.log(myCat["cat name"]);

// Updating Object Properties
// we can update object properties by using . operator

myCat.legs = 90;
console.log(myCat.legs); // Got it
console.log(myCat.legs); // Got it

// Add New property to An Object

myCat.fatynow = true;
console.log(myCat.fatynow);

// Delete a property from object

delete myCat.tails;
console.log(myCat.tails); // giving undefined after delet

// Using Objects for Lookups //works like map in c++
function phoneticlookup(valok) {
  const lookup = {
    name: "lula",
    legs: 4,
    tails: 0 / 0,
    friends: ["everything"]
  };
  return lookup[valok];
}

console.log(phoneticlookup("name"));

// Testing Object for Properties
const looku = {
  name: "lula",
  legs: 4,
  tails: 0 / 0,
  friends: ["everything"]
};

function checkObj(checkProp) {
  if (looku.hasOwnProperty(checkProp)) {
    // strictly equal to
    console.log(looku.hasOwnProperty(checkProp));
    // return true & false bull
    return looku[checkProp];
  }
  return "Not Found";
}

console.log(checkObj("legs"));

// Manupulating Complex Objects

// A JAVASCRIPT OBJECT IS A WAY RO STORE
// FLEXIBLE DATA
// jAVASCRIPT COMPLEX OBJECT IS MUCH SIMILAR TO JSON
// RELEASE

// ********Accessing Nestd Objects**********/
// OMG we can Use as many dots as we want lolololol

const lookme = {
  name: "lula",
  legs: 4,
  tails: 0 / 0,
  friends: ["everything"],
  noobie: {
    why: "human",
    whynot: "woman"
  },
  gotme: noobi
};

console.log(lookme.noobie.why);

// *********Accessing Nested Arrays********/

const myPlanet = [
  {
    type: "flowers",
    list: ["neptune", "pluto", "pakistan"],
    oj: "aaeji"
  },
  {
    type: "flowers",
    list: ["neptune", "p0o", "pakistan"],
    oj: "aaeji"
  }
];

console.log(myPlanet[0].list[2]);

// To Make A copy of collection/object/Array

const myPlanetCopy = JSON.parse(JSON.stringify(lookme));

console.log(myPlanetCopy);

// LOOOOOOOOOPS

// Iterate with While Loops
const arreyo = [];
let i = 0;
while (i < 5) {
  arreyo.push(i);
  i++;
}

console.log(arreyo);

// For Loop

// Let does not let you decleare a variable twice
const myConcat = (arjr1, arjr2) => {
  return arjr1.concate(arjr2);
};

console.log(myConcat([45, 56], [46, 23, 16]));


let name = "Mary";

function sayHello(name) {
    console.log("Hello ", name);
    name = "Steven";
}

sayHello();