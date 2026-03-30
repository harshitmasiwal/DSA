/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    count = 1 ;
    return function() {
        
       if(count == 1){
        count++;
        return n;
       }
       else{
        n = n+1
        return n
       }
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */