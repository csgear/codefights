function arrayChange(inputArray) {
    let c = 0 ;
    
    for(let i = 1 ; i < inputArray.length ; i++)
    {
        if(inputArray[i] <= inputArray[i-1])
        {
            c += inputArray[i-1] - inputArray[i] + 1 ;
            inputArray[i] = inputArray[i-1] + 1 ;
        }
    }
    
    return c ;
}
