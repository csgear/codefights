function boxBlur(image) {
    let x = image[0].length - 2;
    let y = image.length - 2;
    var b = new Array(y);
    
    for(let i = 0;i < y;i++){
        b[i] = new Array(x);
        for(let j = 0;j < x;j++){
            b[i][j] = image[i][j] + image[i][j+1] + image[i][j+2] +
                      image[i+1][j] + image[i+1][j+1] + image[i+1][j+2] +
                      image[i+2][j] + image[i+2][j+1] + image[i+2][j+2];
            b[i][j] = Math.floor(b[i][j] / 9);
        }
    }
    return b;
}