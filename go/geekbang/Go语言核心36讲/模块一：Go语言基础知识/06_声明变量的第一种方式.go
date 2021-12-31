// 2021-12-31
package main

import (
	"flag"
	"fmt"
)

func main() {
	var name = flag.String("name", "everyone", "The greeting object.")
	flag.Parse()
	fmt.Printf("Hello, %v!\n", *name)
}
