// 2022-04-20

package main

import (
	"fmt"
)

func reverString(s string) (string, bool) {
	str := []rune(s)
	l := len(str)
	if l > 5000 {
		return s, false
	}
	for i := 0; i < l/2; i++ {
		str[i], str[l-1-i] = str[l-1-i], str[i]
	}
	return string(str), true
}

func main() {
	str := "abcdefg"
	fmt.Println("str: ", str)
	str2, _ := reverString(str)
	fmt.Println("After reverse:")
	fmt.Println("new str: ", str2)
}
