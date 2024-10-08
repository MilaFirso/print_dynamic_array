Задача 1. Вывод изменяемого динамического массива

В этом задании нужно реализовать функцию вывода динамического массива целых чисел на экран.

Массив, который вы будете выводить на экран, не просто динамический, а массив, у которого может быть запас. Помимо указателя на динамический массив и его фактический размер, то есть максимальное количество элементов, которое массив может хранить, вы должны знать его логический размер, то есть количество добавленных в этот массив элементов. Поэтому сигнатура вашей функции вывода будет выглядеть так: void print_dynamic_array(int* arr, int logical_size, int actual_size). Эта функция вам потребуется в следующих заданиях.

Помните: логический размер массива не может превышать его фактический размер.

Массив должен выводиться на экран следующим образом: элементы массива, входящие в его логический размер, должны выводиться как есть, а те элементы, которые выходят за границы логического размера, должны выводиться, как символ _ (нижнее подчёркивание). Элементы массива разделяются символом пробела.

Реализуйте ввод такого динамического массива с пользовательской консоли. Пользователь должен предоставить:

    Фактический размер массива.
    Логический размер массива.
    Элементы для заполнения массива. Их количество будет равно логическому размеру массива.

Вы должны создать массив, который может хранить количество элементов, равное фактическому размеру массива.

После ввода пользователем массива с консоли выведите на консоль полученный массив с помощью созданной вами функции print_dynamic_array.
