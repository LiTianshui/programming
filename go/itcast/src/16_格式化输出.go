// 2021-11-14
package main

import "fmt"

func main() {
	a := 10
	b := "abc"
	c := 'a'
	d := 3.14
	fmt.Printf("%T, %T, %T, %T\n", a, b, c, d)

	fmt.Printf("%d, %s, %c, %f\n", a, b, c, d)

	fmt.Printf("%v, %v, %v, %v\n", a, b, c, d)
}
