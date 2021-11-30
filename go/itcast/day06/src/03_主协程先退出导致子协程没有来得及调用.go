// 2021-11-30
package main

import (
	"fmt"
	"time"
)

// 主协程退出了，其它协程也要跟着退出
func main() {

	go func() {
		i := 0
		for {
			i++
			fmt.Println("子协程 i = ", i)
			time.Sleep(time.Second)
		}
	}() // 别忘了()
}
