// 2021-11-25
package main

import "fmt"

type Person struct {
	name string
	sex  byte
	age  int
}

type Student struct {
	Person // 只有类型，没有名字，匿名字段，继承了Person的成员
	id     int
	addr   string
	name   string
}

func main() {
	// 声明（定义一个变量）
	var s Student

	// 默认规则（就近原则）
	s.name = "mike"
	s.sex = 'm'
	s.age = 18
	s.addr = "bj"

	s.Person.name = "yoyo"

	fmt.Printf("s = %+v\n", s)
}
