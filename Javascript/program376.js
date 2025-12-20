class Arithmetic {

    constructor(No1, No2) {
        this.No1 = No1;
        this.No2 = No2;
    }

    Add() {
        return this.No1 + this.No2;
    }

    Subtract() {
        return this.No1 - this.No2;
    }
}

function main() {
   
    let Obj1 = new Arithmetic(11, 10);
    let iRet=0;
    iRet=Obj1.Add();
    console.log("Addition is :",iRet);
    iRet=Obj1.Subtract();
    console.log("Substraction is :",iRet);
}

main();
