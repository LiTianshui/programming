// 2021-11-24
package main

import "fmt"

// 数组做函数参数，它是值传递
// 实参数组的每个元素给形参数组拷贝一份
// 形参的数组是实参数组的复制品
func modify(p *[5]int) {
	(*p)[0] = 666
	fmt.Println("modify *a = ", *p)
}

func main() {
	a := [5]int{1, 2, 3, 4, 5} // 初始化

	modify(&a) // 地址传递
	fmt.Println("main: a = ", a)
}
