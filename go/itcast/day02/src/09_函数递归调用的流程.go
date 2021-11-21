// 2021-11-21
package main

import "fmt"

func test(a int) { // 函数终止调用的条件，非常重要
	if a == 1 {
		fmt.Println("a = ", a)
		return // 终止函数调用
	}

	// 函数调用自身
	test(a - 1)
	fmt.Println("a = ", a)
}
func main() {
	test(3)
	fmt.Println("main")
}
