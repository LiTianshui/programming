// 2021-12-29
package main

import (
	"fmt"
	"net/http"
)

// w，给客户端回复数据
// req，读取客户端发送的数据
func HandConn(w http.ResponseWriter, req *http.Request) {
	fmt.Println("req.Method = ", req.Method)
	fmt.Println("req.URL = ", req.URL)
	fmt.Println("req.Header = ", req.Header)
	fmt.Println("req.Body = ", req.Body)

	w.Write([]byte("hello go")) // 给客户端回复数据
}

func main() {
	// 注册处理函数，用户连接，自动调用指定的处理函数
	http.HandleFunc("/", HandConn)

	// 监听绑定
	http.ListenAndServe(":8000", nil)
}
