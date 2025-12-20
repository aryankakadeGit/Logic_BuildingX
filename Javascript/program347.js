function ChkPerfect(no)
{
    let iCnt=0;
    let iSum=0;
    for(iCnt=no/2 ; iCnt>=1 ; iCnt--)
    {
        if(no%iCnt==0)
        {
            iSum+=iCnt;
        };
    }
    
    if(iSum==no)
    {
        return true;
    }
    return false;
}
function main()
{
    let iValue=33 , bRet=false;
    bRet=ChkPerfect(iValue);
    if(bRet==true)
    {
    console.log(`${iValue} is Perfect number`);   
    }
    else
    {
    console.log(`${iValue} is not Perfect number`);   
    }
}
main();
