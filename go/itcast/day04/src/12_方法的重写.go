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

// Student也实现了一个方法，这个方法和Person方法同名，这种方法叫重写
func (tmp *Student) PrintInfo() {
	fmt.Println("Student: tmp = ", tmp)
}

func main() {
	s := Student{Person{"mike", 'm', 18}, 666, "bj"}
	s.PrintInfo()

	// 显式调用继承的方法
	s.Person.PrintInfo()
}
