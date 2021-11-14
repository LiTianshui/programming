// 2021-11-12
package main

import "fmt"

func main() {
	var ch byte // 声明字符类型
	ch = 97
	fmt.Println("ch = ", ch)
	fmt.Printf("%c, %d\n", ch, ch)

	ch = 'a'
	fmt.Printf("%c, %d\n", ch, ch)

	// 大写转小写，小写转大写，大小写相差32，小写大
	fmt.Printf("大写：%d，小写：%d\n", 'A', 'a')
	fmt.Printf("大写转小写：%c\n", 'A'+32)
	fmt.Printf("小写转大写：%c\n", 'a'-32)

	// '\'以反斜杠开头的字符是转义字符
	fmt.Printf("hello go%c", '\n')
	fmt.Printf("hello itcast")
}
