function Count(str)
{
    let iCnt=0;
    let iCount=0;
    for(iCnt=0;iCnt<Str.length;iCnt++)
    {
        if(Str.charAt([iCnt])<='z' && Str.charAt([iCnt])>='a' );
        {
            iCount++;
        }  
    }
    return iCount;
}
function main() 
{
    let Str="Hello";
    let iRet=0;
    iRet=Count(Str);
    console.log(iRet);

}

main();
