#функция для
def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
    return arr

#
def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
    return arr

#
def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[min_idx] > arr[j]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr



numbers = []
print("Введите 10 чисел:")
for i in range(10):
    numbers.append(int(input(f"Число {i + 1}: ")))
print(numbers)
print("\nВыберите метод сортировки:")
print("1. Сортировка пузырьком")
print("2. Сортировка вставками")
print("3. Сортировка выбором")

choice = input("Введите номер метода: ")

if choice == "1":
    sorted_numbers = bubble_sort(numbers.copy())
elif choice == "2":
    sorted_numbers = insertion_sort(numbers.copy())
elif choice == "3":
    sorted_numbers = selection_sort(numbers.copy())
else:
    print("Неверный выбор.")


print("\nОтсортированный список:")
print(sorted_numbers)