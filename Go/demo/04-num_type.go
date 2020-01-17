package main
import "fmt"


func main()  {
	x := complex(1, 2)
	y := complex(3, 4)

	fmt.Println(x*y)
	fmt.Println(real(x*y)) // 实部
	fmt.Println(imag(x*y)) // 虚部
}


