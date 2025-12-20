function DisplayFactors(no)
{
    let iCnt=0;
    let iFact=1;
    for(iCnt=no/2 ; iCnt>=1 ; iCnt--)
    {
        if(no%iCnt==0)
        {
            console.log(iCnt);
        }
    }
}
function main()
{
    let iValue=10 ;
    DisplayFactors(iValue);
}
main();
