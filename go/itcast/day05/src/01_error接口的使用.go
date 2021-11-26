// 2021-11-26
package main

import (
	"errors"
	"fmt"
)

func main() {
	// var err1 error = fmt.Printf("%s", "this is normal err")
	err1 := fmt.Errorf("%s", "this is normal err1")
	fmt.Println("err1 = ", err1)

	err2 := errors.New("this is normal err2")
	fmt.Println("err2 = ", err2)
}
