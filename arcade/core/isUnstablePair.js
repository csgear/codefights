const isUnstablePair = (filename1, filename2) => 
    ((filename1 > filename2) !== (filename1.toUpperCase() > filename2.toUpperCase()) || 
    (filename1 > filename2) !== (filename1.toLowerCase() > filename2.toLowerCase()))
