package main
import "fmt"

func getDate() (int, int) {
	return 100, 200
}

// 匿名变量
func main() {
	a, _ := getDate()
	_, b := getDate()
	fmt.Println(a, b)
}
