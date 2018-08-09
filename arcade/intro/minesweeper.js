const directions = [
    [ 1,-1], [ 1, 0], [ 1, 1],
    [ 0,-1],          [ 0, 1],
    [-1,-1], [-1, 0], [-1, 1]
];

minesweeper = matrix => matrix.map((row, y) => row.map((col, x) => 
    directions.reduce((count, d) => 
        count += !!(matrix[y + d[0]] && matrix[y + d[0]][x + d[1]]), 0)));
