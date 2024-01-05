package main

import (
	"fmt"
	"math"
)

func isPalindrome(x int) bool {
	if x == 0 {
		return true;
	}
	
	if x % 10 == 0 {
		return false;
	}

	if x < 0 {
		return false;
	} 

	var y int;
	y = x;

	var i float64;
	i = 0;

	for y > 0 {
		i++;
		y = y / 10;
	}

	if i == 1 {
		return true
	}

	fmt.Println(i);

	y = x;
	
	var z int;
	z = 0;
	var j float64;
	j = 0;

	for i > 0 {
		fmt.Println(y);
		fmt.Println((y / int(math.Pow(10, i-1))) * int(math.Pow(10,j)));
		var xx = (y / int(math.Pow(10, i-1))) * int(math.Pow(10,j)); 
		z += xx;
		y -= (y / int(math.Pow(10, i-1))) * int(math.Pow(10,i-1));
		j++;
		i--;
		fmt.Println(z);
		fmt.Println("---");
	}

	fmt.Println(z);

	if x == z {
		return true;
	}

	return false;
}


func main() {
	if isPalindrome(1) {
		fmt.Println("sim")
	} else {
		fmt.Println("nao")
	}
}