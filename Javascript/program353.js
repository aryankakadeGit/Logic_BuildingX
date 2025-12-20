function SumDigit(no) 
{
    let Digit=0;
    let iSum=0;
    while(no!=0)
    {
        Digit=no%10;
        iSum+=Digit;
        no=Math.floor(no/10);   
    }
    return iSum;
}

function main() {
    let iValue = 721965, iRet = 0;
    iRet = SumDigit(iValue);
    console.log(`${iValue} sum of digits is  ${iRet}`);

}
main();
