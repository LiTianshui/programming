// 2021-11-12
package main

import "fmt"

func main() {
	// 1、声明类型
	var a bool
	fmt.Println("a = ", a)

	a = true
	fmt.Println("a = ", a)

	// 2、自动推导类型
	var b = false
	fmt.Println("b = ", b)

	c := false
	fmt.Println("c = ", c)
}
