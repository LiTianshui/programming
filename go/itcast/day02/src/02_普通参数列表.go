// 2021-11-20
package main

import "fmt"

// 有参无返回值函数的定义，普通参数列表
// 定义函数时，在函数名后面()定义的参数叫形参
// 参数传递，只能由实参传递给形参，不能反过来，单向传递
func MyFunc01(a int) {
	fmt.Println("a = ", a)
}

func MyFunc02(a int, b int) {
	fmt.Printf("a = %d, b = %d\n", a, b)
}

func MyFunc03(a, b int) {
	fmt.Printf("a = %d, b = %d\n", a, b)
}

func MyFunc04(a int, b string, c float64) {
	fmt.Printf("a = %d, b = %d\n", a, b)
}

func main() {
	// 有参无返回值函数的调用：函数名(所需参数)
	// 调用函数传递的参数叫实参
	MyFunc01(666)

	MyFunc02(666, 777)
}
