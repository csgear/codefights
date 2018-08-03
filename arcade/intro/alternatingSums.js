
function alternatingSums(a) {
  return a.reduce(
    (sum, next, index) => (
      index % 2 === 0 ? [sum[0] + next, sum[1]] : [sum[0], sum[1] + next]),
    [0, 0]
  );
}

function addAll(a) {
  return a.reduce( (sum, next, i) => sum + next, 0) ;
} 

  var c = ['a','f','c',1,5,2].reduce(
    (result,next,index) => result + next, '') ;

  console.log(c) ;

  var a = [50, 60, 60, 45, 70] ;

  console.log(alternatingSums(a)) ;

  console.log(addAll(a)) ;