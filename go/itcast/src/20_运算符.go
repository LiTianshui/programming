// 2021-11-16
package main

import "fmt"

func main() {
	fmt.Println("4 > 3 结果：", 4 > 3)
	fmt.Println("4 != 3 结果：", 4 != 3)

	fmt.Println("!(4 > 3) 结果：", !(4 > 3))
	fmt.Println("!(4 != 3) 结果：", !(4 != 3))

	fmt.Println("true && true 结果：", true && true)
	fmt.Println("true && false 结果：", true && false)

	fmt.Println("true || false 结果：", true || false)
	fmt.Println("false || false 结果：", false || false)

	a := 8
	fmt.Println("0 <= a && a <= 10 结果：", 0 <= a && a <= 10)
}
