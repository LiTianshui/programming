// 2021-11-12
package main

import "fmt"

func main() {
	var str1 string
	str1 = "abc"
	fmt.Println("str1 = ", str1)

	// 自动推导类型
	str2 := "mike"
	fmt.Printf("str2 类型是 %T\n", str2)

	// 内建函数，len()可以预测字符串的长度，有多少个字符
	fmt.Println("len(str2) = ", len(str2))
}
