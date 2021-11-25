// 2021-11-25
package main

import "fmt"

// 定义一个结构体类型
type Student struct {
	id   int
	name string
	sex  byte
	age  int
	addr string
}

func test01(s Student) {
	s.id = 666
	fmt.Println("test01: ", s)
}

func test02(p *Student) {
	p.id = 666
	fmt.Println("test02: ", *p)
}

func main() {
	s := Student{1, "mike", 'm', 18, "bj"}
	test02(&s) // 值传递，形参无法改变实参
	fmt.Println("main: ", s)
}

func main01() {
	s := Student{1, "mike", 'm', 18, "bj"}
	test01(s) // 值传递，形参无法改变实参
	fmt.Println("main: ", s)
}
