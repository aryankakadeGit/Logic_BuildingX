function Maximum(Brr)
{
    let iCnt=0;
    let iMax=Brr[0];
    for(iCnt=1;iCnt<Brr.length;iCnt++)
    {
        if(Brr[iCnt]>iMax)
        {
            iMax=Brr[iCnt];
        }
    }
    return iMax;
}
function main()
{
    let iRet=0;
    const Arr=[10,20,30,40,50];
    iRet= Maximum(Arr);
    console.log(iRet);
    
}
main();