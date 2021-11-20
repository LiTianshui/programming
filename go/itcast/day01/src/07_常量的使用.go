// 2021-11-12
package main

import "fmt"

func main() {
	// 变量：程序运行期间，可以改变的量，变量声明需要var
	// 常量：程序运行期间，不可以改变的量，常量声明需要const

	const a int = 10
	fmt.Println("a = ", a)

	const b = 11.2
	fmt.Printf("b type is %T\n", b)
	fmt.Println("b = ", b)
}
