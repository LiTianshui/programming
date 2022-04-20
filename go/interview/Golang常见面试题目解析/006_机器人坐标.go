// 2022-04-20

package main

import (
	"fmt"
	"unicode"
)

const (
	Left = iota
	Top
	Right
	Bottom
)

func main() {
	fmt.Println(move("R2(LB)", 0, 0, Top))
}

func move(cmd string, x0 int, y0 int, z0 int) (x, y, z int) {
	x, y, z = x0, y0, z0
	repeat := 0
	repeatCmd := ""
	for _, s := range cmd {
		switch {
		case unicode.IsNumber(s):
			repeat = repeat*10 + (int(s) - '0')
		case s == ')':
			for i := 0; i < repeat; i++ {
				x, y, z = move(repeatCmd, x, y, z)
			}
			repeat = 0
			repeatCmd = ""
		case repeat > 0 && s != '(' && s != ')':
			repeatCmd = repeatCmd + string(s)
		case s == 'L':
			z = (z - 1 + 4) % 4
		case s == 'R':
			z = (z + 1) % 4
		case s == 'F':
			switch {
			case z == Left || z == Right:
				x = x + z - 1
			case z == Top || z == Bottom:
				y = y - z + 2
			}

		case s == 'B':
			switch {
			case z == Left || z == Right:
				x = x - z + 1
			case z == Top || z == Bottom:
				y = y + z - 2
			}
		}
	}
	return
}
