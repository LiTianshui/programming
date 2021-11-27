// 2021-11-27
package main

import (
	"fmt"
	"regexp"
)

func main() {

	buf := "3.14 567 agsdg 1.23 7. 8.99 1sdljgl 6.66"

	// 1) 解释正则表达式，+匹配前一个字符的1次或多次
	reg1 := regexp.MustCompile(`\d+\.\d+`)
	if reg1 == nil {
		fmt.Println("MustCompile err")
		return
	}

	// 2）根据规则提取关键信息
	result := reg1.FindAllStringSubmatch(buf, -1)
	fmt.Println("result = ", result)
}
