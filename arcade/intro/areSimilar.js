function areSimilar(a, b) {
    var s = new Array() ;

    for(let i = 0 ; i < a.length ; i++)
    {
        if(a[i] != b[i])
            s.push(i) ;
    }

    return s.length == 0 || s.length == 2 && a[s[0]] == b[s[1]] && a[s[1]] == b[s[0]] ;
}