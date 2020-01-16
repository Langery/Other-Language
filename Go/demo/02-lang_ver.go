package main
import "fmt"

func main () {
	var a string = "Tom"
	fmt.Println(a)

	var b, c int = 1, 2
	fmt.Println(b, c)

	var d int
	fmt.Println(d) // 0

	var e bool
	fmt.Println(e) // false

	g, h := 123, "hello"
	fmt.Println(g, h)
}

