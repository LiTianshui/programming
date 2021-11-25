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

func main() {
	// 顺序初始化，每个程序员必须初始化
	var p1 *Student = &Student{1, "mike", 'm', 18, "bj"}
	fmt.Println("*p1 = ", *p1)

	// 指定成员初始化，没有初始化的成员自动赋值为0
	p2 := &Student{name: "mike", addr: "bj"}
	fmt.Printf("p2 type is %T\n", p2)
	fmt.Println("*p2 = ", *p2)
}
