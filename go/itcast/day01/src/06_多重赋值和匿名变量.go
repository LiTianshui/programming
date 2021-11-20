// 2021-11-12
package main

import "fmt"

// go函数可以返回多个值
func test() (a, b, c int) {
	return 1, 2, 3
}

func main() {
	a, b := 10, 20
	var tmp int
	tmp = a
	a = b
	b = tmp
	fmt.Printf("a = %d, b = %d\n", a, b)

	i := 10
	j := 20
	i, j = j, i
	fmt.Printf("i = %d, j = %d\n", i, j)

	// _匿名变量，丢弃数据不处理，_匿名变量配合函数返回值使用
	tmp, _ = i, j
	fmt.Println("tmp = ", tmp)

	var c, d, e int
	c, d, e = test()
	fmt.Printf("c = %d, d = %d, e = %d\n", c, d, e)

	_, d, _ = test()
	fmt.Printf("d = %d\n", d)
}
