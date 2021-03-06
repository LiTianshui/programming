// 2021-11-24
package main

import "fmt"

func main() {
	a := []int{1, 2, 3, 4, 5}
	s := a[0:3:5]
	fmt.Println("s = ", s)
	fmt.Println("len(s) = ", len(s)) // 长度 3-0
	fmt.Println("cap(s) = ", cap(s)) // 容量 5-0

	s = a[1:4:5]
	fmt.Println("s = ", s)
	fmt.Println("len(s) = ", len(s)) // 长度 4-1
	fmt.Println("cap(s) = ", cap(s)) // 容量 5-1
}
