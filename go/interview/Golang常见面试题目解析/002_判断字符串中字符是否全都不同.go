// 2022-04-19

package main

import (
	"fmt"
	"strings"
)

func isUniqueString(s string) bool {
	if strings.Count(s, "") > 3000+1 {
		return false
	}
	for _, v := range s {
		if v > 127 {
			return false
		}
		if strings.Count(s, string(v)) > 1 { // 注意用string(v)，而不是v
			return false
		}
	}
	return true
}

func isUniqueString2(s string) bool {
	if strings.Count(s, "") > 3000+1 {
		return false
	}
	for k, v := range s {
		if v > 127 {
			return false
		}
		if strings.Index(s, string(v)) != k {
			return false
		}
	}
	return true
}

func main() {
	str1 := "abcdef!"
	str2 := "abbcad"
	str3 := "!@#$%^"
	str4 := "!@#@!@#"

	fmt.Println("str1 is ", isUniqueString(str1))
	fmt.Println("str2 is ", isUniqueString(str2))
	fmt.Println("str3 is ", isUniqueString(str3))
	fmt.Println("str4 is ", isUniqueString(str4))

	fmt.Println("str1 is ", isUniqueString2(str1))
	fmt.Println("str2 is ", isUniqueString2(str2))
	fmt.Println("str3 is ", isUniqueString2(str3))
	fmt.Println("str4 is ", isUniqueString2(str4))
}
