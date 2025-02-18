package main

import "fmt"

// checkBin is a function that performs a binary search on a sorted integer list.
// It returns the index of the first occurrence of the target integer 'i' in the list,
// or -1 if the target integer is not found.
//
// Parameters:
// - list: A sorted slice of integers on which to perform the binary search.
// - i: The target integer to search for in the list.
//
// Return:
//   - An integer representing the index of the first occurrence of the target integer 'i' in the list,
//     or -1 if the target integer is not found.
func checkBin(list []int, i int) int {
	low := 0
	high := len(list) - 1

	for low <= high {
		mid := (low + high) / 2

		if list[mid] == i {
			return mid
		}

		if list[mid] < i {
			low = mid + 1
		} else {
			high = mid - 1
		}
	}
	return -1
}

func main() {
	list := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
	i := 5
	fmt.Println(checkBin(list, i))
}
