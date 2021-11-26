// 2021-11-26
package main

import "fmt"

func testa() {
	fmt.Println("aaaaaaaaaa")
}
func testb() {
	// fmt.Println("bbbbbbbbbb")
	// 显式调用panic函数，导致程序中断
	panic("this is a panic test")
}
func testc() {
	fmt.Println("cccccccccc")
}
func main() {
	testa()
	testb()
	testc()
}
