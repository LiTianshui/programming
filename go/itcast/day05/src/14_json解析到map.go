// 2021-11-27
package main

import (
	"encoding/json"
	"fmt"
)

type IT struct {
	Company  string   `json:"company"`  // 此字段不会输出到屏幕
	Subjects []string `json:"subjects"` // 二次编码
	IsOk     bool     `json:"isok"`
	Price    float64  `json:"price"`
}

func main() {

	jsonBuf := `{
	"company": "itcast",
	"subjects": [
		"Go",
		"C++",
		"Python",
		"Test"
	],
	"isok": true,
	"price": 666.666
}`

	// 创建一个map
	m := make(map[string]interface{}, 4)

	err := json.Unmarshal([]byte(jsonBuf), &m) // 第二个参数要地址传递
	if err != nil {
		fmt.Println("err = ", err)
		return
	}
	fmt.Printf("m = %+v\n", m)

	// var str string
	// str = string(m["company"])
	// fmt.Println("str = ", str)

	var str string

	// 类型断言
	for key, value := range m {
		// fmt.Printf("%v ============> %v\n", key, value)
		switch data := value.(type) {
		case string:
			str = data
			fmt.Printf("map[%s]的值类型为string，value = %s\n", key, str)
		case bool:
			fmt.Printf("map[%s]的值类型为string，value = %v\n", key, value)
		case float64:
			fmt.Printf("map[%s]的值类型为float64，value = %f\n", key, value)
		case []string:
			fmt.Printf("map[%s]的值类型为[]string，value = %v\n", key, value)
		case []interface{}:
			fmt.Printf("map[%s]的值类型为[]interface，value = %v\n", key, value)
		}
	}
}
