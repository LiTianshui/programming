// 2021-11-17
package main

import "fmt"

func main() {
	var num int
	fmt.Printf("请按下楼层：")
	fmt.Scan(&num)

	switch num {
	case 1:
		fmt.Println("按下的是1楼")
		// break	// go语言保留了break关键字，跳出switch语句，但不用写，默认包含。
		fallthrough // 不跳出switch语句，后面的无条件执行
	case 2:
		fmt.Println("按下的是2楼")
		// break
		fallthrough
	case 3:
		fmt.Println("按下的是3楼")
		// break
		fallthrough
	case 4:
		fmt.Println("按下的是4楼")
		// break
		fallthrough
	default:
		fmt.Println("按下的是xxx楼")
	}
}
