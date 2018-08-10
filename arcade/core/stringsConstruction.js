const stringsConstruction = (a, b) => {
    const ma = new Map();
    const mb = new Map();
    
    [...a].forEach(k => ma.set(k, ~-ma.get(k)));
    [...b].forEach(k => mb.set(k, ~-mb.get(k)));
    
    return [...ma].reduce((r, [k, c]) => Math.min(r, mb.has(k) && mb.get(k) / c), Infinity) ^ 0;
}
