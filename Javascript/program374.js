class Demo
{
    constructor()
    {
        this.No1=0;
        this.No2=0;
        console.log("Inside Default Constructor");
    }
    constructor(A,B)//Not Allowed
    {
        this.No1=A;
        this.No2=B;
        console.log("Inside Parameterised Constructor");
    }
}
function main()
{
    let obj1=new Demo();
    let obj2=new Demo(10,20);
}
main();