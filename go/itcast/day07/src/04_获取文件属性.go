// 2021-12-04
package main

import (
	"fmt"
	"os"
)

func main() {
	list := os.Args
	if len(list) != 2 {
		fmt.Println("usage: xxx file")
		return
	}

	filename := list[1]

	info, err := os.Stat(filename)
	if err != nil {
		fmt.Println("err = ", err)
		return
	}

	fmt.Println("name = ", info.Name())
	fmt.Println("size = ", info.Size())
}
