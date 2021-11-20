// 2021-11-18
package main

import "fmt"

func main() {
	// goto可以用在任何地方，但是不能跨函数使用
	fmt.Println("11111111")

	goto End

	fmt.Println("22222222")

End:
	fmt.Println("33333333")
}
