package main

import "fmt"

func main() {
	var i int
	fmt.Scan(&i)
	if i > 2 && i%2 == 0 {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}
