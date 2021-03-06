// 2021-11-25
package main

import "fmt"

type Person struct {
	name string
	sex  byte
	age  int
}

// 带有接收者的函数叫方法
func (tmp Person) PrintInfo() {
	fmt.Println("tmp = ", tmp)
}

// 通过一个函数给成员赋值
func (p *Person) SetInfo(n string, s byte, a int) {
	p.name = n
	p.sex = s
	p.age = a
}

func main() {
	// 定义同时初始化
	p := Person{"mike", 'm', 18}
	p.PrintInfo()

	// 定义一个结构体变量
	var p2 Person
	(&p2).SetInfo("yoyo", 'f', 22)
	p2.PrintInfo()
}
