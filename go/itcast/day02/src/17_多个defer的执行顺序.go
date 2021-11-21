// 2021-11-21
package main

import "fmt"

func test(x int) {
	result := 100 / x
	fmt.Println("result = ", result)
}

func main() {
	defer fmt.Println("aaaaaaaaaa")

	defer fmt.Println("bbbbbbbbbb")

	// 调用一个函数，导致内存出问题
	defer test(0)

	defer fmt.Println("cccccccccc")
}
