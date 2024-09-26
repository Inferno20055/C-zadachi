import random
import time


# Функции сортировки
def bubble_sort(arr):
    n = len(arr)
    swaps = 0
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swaps += 1
    return arr, swaps


def insertion_sort(arr):
    swaps = 0
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
            swaps += 1
        arr[j + 1] = key
    return arr, swaps


def selection_sort(arr):
    n = len(arr)
    swaps = 0
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        swaps += 1
    return arr, swaps


def merge_sort(arr):
    if len(arr) <= 1:
        return arr, 0
    middle = len(arr) // 2
    left_half, left_swaps = merge_sort(arr[:middle])
    right_half, right_swaps = merge_sort(arr[middle:])
    merged, merge_swaps = merge(left_half, right_half)
    return merged, left_swaps + right_swaps + merge_swaps


def merge(left, right):
    swaps = 0
    merged = []
    i = j = 0
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            merged.append(left[i])
            i += 1
        else:
            merged.append(right[j])
            j += 1
            swaps += len(left) - i
    merged.extend(left[i:])
    merged.extend(right[j:])
    return merged, swaps


def quick_sort(arr):
    if len(arr) <= 1:
        return arr, 0
    pivot = arr[len(arr) // 2]
    left = [x for x in arr if x < pivot]
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]
    left_sorted, left_swaps = quick_sort(left)
    right_sorted, right_swaps = quick_sort(right)
    return left_sorted + middle + right_sorted, left_swaps + right_swaps


def shaker_sort(arr):
    n = len(arr)
    swaps = 0
    start = 0
    end = n - 1
    while start < end:
        for i in range(start, end):
            if arr[i] > arr[i + 1]:
                arr[i], arr[i + 1] = arr[i + 1], arr[i]
                swaps += 1
        end -= 1
        for i in range(end, start, -1):
            if arr[i] < arr[i - 1]:
                arr[i], arr[i - 1] = arr[i - 1], arr[i]
                swaps += 1
        start += 1
    return arr, swaps


# Основная часть программы
size = int(input("Введите размер списка: "))
numbers = [random.randint(1, 100) for _ in range(size)]
print("Исходный список:", numbers)

print("\nВыберите метод сортировки:")
print("1. Сортировка пузырьком")
print("2. Сортировка вставками")
print("3. Сортировка выбором")
print("4. Сортировка слиянием")
print("5. Быстрая сортировка")
print("6. Шейкер-сортировка")

choice = input("Введите номер метода: ")

start_time = time.time()

if choice == "1":
    sorted_numbers, swaps = bubble_sort(numbers.copy())
elif choice == "2":
    sorted_numbers, swaps = insertion_sort(numbers.copy())
elif choice == "3":
    sorted_numbers, swaps = selection_sort(numbers.copy())
elif choice == "4":
    sorted_numbers, swaps = merge_sort(numbers.copy())
elif choice == "5":
    sorted_numbers, swaps = quick_sort(numbers.copy())
elif choice == "6":
    sorted_numbers, swaps = shaker_sort(numbers.copy())
else:
    print("Неверный выбор.")
    exit()

end_time = time.time()

print("\nОтсортированный список:", sorted_numbers)
print(f"Время сортировки: {end_time - start_time:.4f} секунд")
print(f"Количество перестановок: {swaps}")