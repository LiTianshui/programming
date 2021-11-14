// 2021-11-12
package main

import "fmt"

func main() {
	// 声明变量
	var f1 float32
	f1 = 3.14
	fmt.Println("f1 = ", f1)

	// 自动推导类型
	f2 := 3.14
	fmt.Printf("f2 type is %T\n", f2)
}
