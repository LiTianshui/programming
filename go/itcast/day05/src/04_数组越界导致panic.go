// 2021-11-26
package main

import "fmt"

func testa() {
	fmt.Println("aaaaaaaaaa")
}
func testb(x int) {
	var a [10]int
	a[x] = 111 // 当x为20时，导致数组越界，产生一个panic导致程序崩溃
}
func testc() {
	fmt.Println("cccccccccc")
}
func main() {
	testa()
	testb(20)
	testc()
}
