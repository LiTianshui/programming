// 2022-04-21
// Reference: https://mp.weixin.qq.com/s/GhC2WDw3VHP91DrrFVCnag

package main

import (
	"context"
	"fmt"
	"os"
	"time"
)

func main() {
	timer := time.NewTimer(time.Second * 5)
	data := []int{1, 2, 3, 10, 999, 8, 345, 7, 98, 33, 66, 77, 88, 68, 96}
	dataLen := len(data)
	size := 2
	target := 345
	ctx, cancel := context.WithCancel(context.Background())
	resultChan := make(chan bool)
	for i := 0; i < dataLen; i += size {
		end := i + size
		if end >= dataLen {
			end = dataLen - 1
		}
		go SearchTarget(ctx, data[i:end], target, resultChan)
	}
	select {
	case <-timer.C:
		fmt.Fprintln(os.Stderr, "Timeout! Not Found")
		cancel()
	case <-resultChan:
		fmt.Fprintln(os.Stdout, "Found it!\n")
		cancel()
	}

	time.Sleep(time.Second * 2)
}

func SearchTarget(ctx context.Context, data []int, target int, resultChan chan bool) {
	for _, v := range data {
		select {
		case <-ctx.Done():
			fmt.Fprintln(os.Stdout, "Task canceled!\n")
			return
		default:
		}
		fmt.Fprintf(os.Stdout, "v: %d \n", v)
		time.Sleep(time.Millisecond * 1500)
		if target == v {
			resultChan <- true
			return
		}
	}
}
