function CountDigit(no) 
{
    let Digit=0;
    let iCount=0;
    while(no!=0)
    {
        Digit=no%10;
        iCount++;
        no=Math.floor(no/10);   
    }
    return iCount;
}

function main() {
    let iValue = 123, iRet = 0;
    iRet = CountDigit(iValue);
    console.log(`${iValue} contains ${iRet} digits`);

}

main();
