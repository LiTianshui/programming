// 2021-11-12
package main

import "fmt"

func main() {
	var ch byte
	var str string
	ch = 'a'
	fmt.Println("ch = ", ch)
	str = "a"
	fmt.Println("str = ", str)
	str = "hello go"
	fmt.Printf("str[0] = %c, str[1] = %c\n", str[0], str[1])
}
