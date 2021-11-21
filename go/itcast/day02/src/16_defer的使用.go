// 2021-11-21
package main

import "fmt"

func main() {

	// defer延迟调用，main函数结束前调用
	defer fmt.Println("bbbbbbbbbb")
	fmt.Println("aaaaaaaaaa")
}
