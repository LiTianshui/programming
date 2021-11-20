// 2021-11-20
package main

import "fmt"

func funcb() (b int) {
	b = 222
	fmt.Println("funcb b = ", b)
	return
}

func funca() (a int) {
	a = 111
	b := funcb()
	fmt.Println("funca b = ", b)

	// 调用另外一个函数
	fmt.Println("funca a = ", a)

	return // 返回
}
func main() {
	fmt.Println("main func")
	a := funca()
	fmt.Println("main a = ", a)
}
