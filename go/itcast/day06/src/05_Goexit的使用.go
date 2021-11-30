// 2021-11-30
package main

import (
	"fmt"
	"runtime"
)

func test() {
	defer fmt.Println("cccccccccc")
	runtime.Goexit() // 终止所在的协程
	fmt.Println("dddddddd")
}

func main() {

	go func() {
		fmt.Println("aaaaaaaaaa")
		test()
		fmt.Println("bbbbbbbbbb")
	}()

	for {

	}
}
