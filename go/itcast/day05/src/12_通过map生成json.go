// 2021-11-27
package main

import (
	"encoding/json"
	"fmt"
)

/*
{
	"company": "itcast",
	"subjects": [
		"Go"
		"C++"
		"Python"
		"Test"
	],
	"isok": true,
	"price": 666.666
}
*/

// 成员变量名首字母必须大写
type IT struct {
	Company  string   `json:"-"`       // 此字段不会输出到屏幕
	Subjects []string `json:"objects"` // 二次编码
	IsOk     bool     `json:",string"`
	Price    float64  `json:",string"`
}

func main() {
	// 创建一个map
	m := make(map[string]interface{}, 4)
	m["company"] = "itcast"
	m["subjects"] = []string{"Go", "C++", "Python", "Test"}
	m["isok"] = true
	m["price"] = 666.666

	// 编写成json
	// result, err := json.Marshal(m)
	result, err := json.MarshalIndent(m, "", "	")
	if err != nil {
		fmt.Println("err = ", err)
		return
	}
	fmt.Println("result = ", string(result))
}
