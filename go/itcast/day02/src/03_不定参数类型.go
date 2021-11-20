// 2021-11-20
package main

import "fmt"

func MyFunc01(a int, b int) { // 固定参数

}

// ...int类型这样的类型，...type不定参数类型
// 注意：不定参数，一定（只能）放在形参中的最后一个参数
// 固定参数一定要传参，不定参数根据需求传递
func MyFunc02(args ...int) { // 传递的实参可以是0或多个
	fmt.Println("len(args) = ", len(args))

	for i := 0; i < len(args); i++ {
		fmt.Printf("args[%d] = %d\n", i, args[i])
	}

	// 返回2个值，第一个是下标，第二个是下标所对应的数
	for i, data := range args {
		fmt.Printf("args[%d] = %d\n", i, data)
	}
}

func main() {

	MyFunc02()
	MyFunc02(1)
	MyFunc02(1, 2, 3)
}
