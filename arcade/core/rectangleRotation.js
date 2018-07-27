function rectangleRotation(a, b) {

    var square = function(x) {
      return x * x;
    }
  
    var answer = 0;
    for (var x = -a - b; x <= a + b; x++) {
      for (var y = -a - b; y <= a + b; y++) {
        if (2 * square(x - y) <= square(a) && 2 * square(x + y) <= square(b)) {
          answer++;
        }
      }
    }
  
    return answer;
  }
  