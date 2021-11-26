// 2021-11-26
package main

import "fmt"

type Person struct {
	name string
	sex  byte
	age  int
}

func (p Person) SetInfoValue() {
	fmt.Println("SetInfoValue")
}

// 接收者为指针变量，引用传递
func (p *Person) SetInfoPointer() {
	fmt.Println("SetInfoPointer")
}

func main() {
	p := Person{"mike", 'm', 18}
	p.SetInfoPointer() // func (p *Person) SetInfoPointer()
	// 内部，先把p转换为&p再调用，(&p).SetInfoPointer()

	p.SetInfoValue()
}
