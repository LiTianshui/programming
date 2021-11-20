// 2021-11-17
package main

import "fmt"

func main() {
	// 支持一个初始化语句，初始化语句和变量本身，以分号分隔
	switch num := 6; num {
	case 1:
		fmt.Println("按下的是1楼")
		// break	// go语言保留了break关键字，跳出switch语句，但不用写，默认包含。
		fallthrough // 不跳出switch语句，后面的无条件执行
	case 2:
		fmt.Println("按下的是2楼")
		// break
		fallthrough
	case 3, 4, 5:
		fmt.Println("按下的是yyy楼")
		// break
		fallthrough
	case 6:
		fmt.Println("按下的是6楼")
		// break
		fallthrough
	default:
		fmt.Println("按下的是xxx楼")
	}

	score := 85
	switch { // 可以没有条件
	case score > 90: // case后面可以放条件
		fmt.Println("优秀")
	case score > 80: // case后面可以放条件
		fmt.Println("良好")
	case score > 70: // case后面可以放条件
		fmt.Println("一般")
	default:
		fmt.Println("其它")
	}
}
