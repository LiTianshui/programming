// 2022-04-20

package main

import (
	"fmt"
	"strings"
)

func isRegroup(s1, s2 string) bool {
	sl1 := len([]rune(s1))
	sl2 := len([]rune(s2))
	if sl1 > 5000 || sl2 > 5000 || sl1 != sl2 {
		return false
	}
	for _, v := range s1 {
		if strings.Count(s1, string(v)) != strings.Count(s2, string(v)) {
			return false
		}
	}
	return true
}

func main() {
	str1a := "abcdefg"
	str1b := "gfedcba"
	str2a := "aaavcss"
	str2b := "aaavcsw"
	fmt.Println("Compare str1a & str1b: ", isRegroup(str1a, str1b))
	fmt.Println("Compare str2a & str2b: ", isRegroup(str2a, str2b))
}
