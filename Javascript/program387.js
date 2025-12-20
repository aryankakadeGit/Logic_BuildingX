const { type } = require("express/lib/response");

function main() 
{
    let Arr=['H','e','l','l','o'];
    let str=Arr.join("");
    console.log(typeof(str));
    console.log(str);

}

main();
