// 2021-11-17
package main

import "fmt"

func main() {
	if a := 8; a == 10 {
		fmt.Println("a == 10")
	} else if a > 10 {
		fmt.Println("a > 10")
	} else if a < 10 {
		fmt.Println("a < 10")
	} else {
		fmt.Println("这是不可能的")
	}

	if b := 8; b == 10 {
		fmt.Println("b == 10")
	}
	if b > 10 {
		fmt.Println("b > 10")
	}
	if b < 10 {
		fmt.Println("b < 10")
	}
}
