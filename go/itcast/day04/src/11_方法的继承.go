// 2021-11-26
package main

import "fmt"

type Person struct {
	name string
	sex  byte
	age  int
}

func (tmp *Person) PrintInfo() {
	fmt.Printf("name = %s, sex = %c, age = %d\n", tmp.name, tmp.sex, tmp.age)
}

type Student struct {
	Person
	id   int
	addr string
}

func main() {
	s := Student{Person{"mike", 'm', 18}, 666, "bj"}
	s.PrintInfo()
}
