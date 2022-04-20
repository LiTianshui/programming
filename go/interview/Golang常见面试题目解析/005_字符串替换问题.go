// 2022-04-20

package main

import (
	"fmt"
	"strings"
	"unicode"
)

func replaceBlank(s string) (string, bool) {
	if len([]rune(s)) > 1000 {
		return s, false
	}
	for _, v := range s {
		if string(v) != " " && unicode.IsLetter(v) == false {
			return s, false
		}
	}
	return strings.Replace(s, " ", "%20", -1), true
}

func main() {
	str1 := "abc def ghj klm"
	str2 := "a! in @#$ kams"
	newstr1, boolstr1 := replaceBlank(str1)
	newstr2, boolstr2 := replaceBlank(str2)
	if boolstr1 == true {
		fmt.Println("new str1 = ", newstr1)
	} else {
		fmt.Println("str1 failed")
	}
	if boolstr2 == true {
		fmt.Println("new str2 = ", newstr2)
	} else {
		fmt.Println("str2 failed")
	}
}
