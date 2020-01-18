package main

import "fmt"

func swap(a, b *int) {
	t := *a
	*a = *b
	*b = t
}

func main() {
	var cat int = 1
	var str string = "banana"
	fmt.Println("%p %p", &cat, &str)

	x, y := 1, 2
	swap(&x, &y)
	fmt.Println(x, y)

	str1 := new(string)
	*str1 = "Go lang"
	fmt.Println(*str1)
}