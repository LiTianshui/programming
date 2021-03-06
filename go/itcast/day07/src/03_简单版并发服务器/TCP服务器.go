// 2021-12-04
package main

import (
	"fmt"
	"net"
	"strings"
)

// 处理用户请求
func HandleConn(conn net.Conn) {
	// 函数调用完毕，自动关闭conn
	defer conn.Close()

	// 获取客户端的网络地址信息
	addr := conn.RemoteAddr().String()
	fmt.Println("addr connect successfully")

	buf := make([]byte, 2048)

	for {
		// 读取用户数据
		n, err := conn.Read(buf)
		if err != nil {
			fmt.Println("err = ", err)
			return
		}
		fmt.Printf("[%s]: %s\n", addr, string(buf[:n]))

		if "exit" == string(buf[:n-2]) { // nc测试时为n-1(/n)，使用自己写的client时为n-2(/r/n)
			fmt.Println(addr, "exit")
			return
		}

		// 把数据转换为大写，再给用户发送
		conn.Write([]byte(strings.ToUpper(string(buf[:n]))))
	}
}

func main() {
	// 监听
	listener, err := net.Listen("tcp", "127.0.0.1:8000")
	if err != nil {
		fmt.Println("err = ", err)
		return
	}

	defer listener.Close()

	// 接收多个用户
	for {
		conn, err := listener.Accept()
		if err != nil {
			fmt.Println("err = ", err)
			return
		}

		// 处理用户请求，新建一个协程
		go HandleConn(conn)
	}
}
