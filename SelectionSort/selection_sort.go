package main

import "fmt"

func findtheleast(arr []int) int{
	least := arr[0]
	least_index := 0 
	for i := 1; i < len(arr); i++ {
		if arr[i] < least{
			least = arr[i]
			least_index = i
		}
	}
	return least_index
}

func selectionSort(arr []int) []int{
	size := len(arr)
	newArr := make([]int, size)
	for i := 0; i < size; i++ {
		least := findtheleast(arr)
		newArr[i] = arr[least]
		arr = append(arr[:least], arr[least+1:]...)
	}
	return newArr
}

func main() {
	arr := []int{1, 5, 3, 2, 4}
	fmt.Println(selectionSort(arr))
}