// 2021-11-26
package main

import (
	"fmt"
	"strings"
)

func main() {
	// 查看"hellogo"中是否包含"hello"，包含返回true，不包含返回false
	fmt.Println(strings.Contains("hellogo", "hello"))
	fmt.Println(strings.Contains("hellogo", "abc"))

	// Joins组合
	s := []string{"abc", "hello", "mike", "go"}
	buf := strings.Join(s, "@")
	fmt.Println("buf = ", buf)

	// Index
	fmt.Println(strings.Index("abcdhello", "hello"))
	fmt.Println(strings.Index("abcdhello", "go")) // 不包含字串返回-1

	buf = strings.Repeat("go", 3)
	fmt.Println("buf = ", buf)

	// Split以指定的分隔符拆分
	buf = "hello@abc@go@mike"
	s2 := strings.Split(buf, "@")
	fmt.Println("s2 = ", s2)

	// Trim去掉两头的字符
	buf = strings.Trim("      are u ok       ", " ") // 去掉两头空格
	fmt.Printf("buf = #%s#", buf)

	// 去掉空格，把元素放入切片中
	s3 := strings.Fields("      are u ok       ")
	fmt.Println("s3 = ", s3)
	for i, data := range s3 {
		fmt.Println(i, ", ", data)
	}
}
