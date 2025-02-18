class BinarySearch():

    def search_iterative(self, list, item):
        low = 0
        high = len(list) - 1

        while low <= high:
            mid = (low + high) // 2
            guess = list[mid]
            if guess == item:
                return mid
            if guess > item:
                high = mid - 1
            else:
                low = mid + 1
        return None


if __name__ == "__main__":
    # We must initialize the class to use the methods of this class
    bs = BinarySearch()
    my_list = [1, 3, 5, 7, 9]
    print(bs.search_iterative(my_list, 9))  # => 1
    # 'None' means nil in Python. We use to indicate that the item wasn't found.
    print(bs.search_iterative(my_list, -1))  # => None