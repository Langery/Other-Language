## Go Land

> Run

``` bash
  go run xxx.go
  go build xxx.go
```

> Link

1. [Go语言入门教程](http://c.biancheng.net/golang/)

### 数据类型

1. Boolean
2. 数字类型 string int / float32 / float64
    - 整数
    - 浮点数
    - 复数
3. 字符串
4. 派生类型
    - 指针类型（Pointer）
    - 数组类型
    - 结构化类型
    - Channel 类型
    - 函数类型
    - 切片类型
    - 接口类型（interface）
    - Map 类型

### 笔记

1. iota 常量生成器
``` go
type Weekday int

const (
  Sunday Weekday = iota // 0
  Monday // 1
  Tuesday // 2
  Wednesday //3
  Thursday // ...
  Friday
  Saturday
)
```

2. Println 与 Printf
    - Println :可以打印出字符串，和变量
    - Printf : 只可以打印出格式化的字符串,可以输出字符串类型的变量，不可以输出整形变量和整形

