public class BubbleSort {
    public static void main(String[] args) {
        int[] numbers = {5, 3, 8, 2, 1, 9};
        bubbleSort(numbers);
        System.out.println("Sorted numbers:");
        printNumbers(numbers);
    }

    public static void bubbleSort(int[] numbers) {
        int n = numbers.length;
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (numbers[j] > numbers[j+1]) {
                    // Swap numbers[j] and numbers[j+1]
                    int temp = numbers[j];
                    numbers[j] = numbers[j+1];
                    numbers[j+1] = temp;
                }
            }
        }
    }

    public static void printNumbers(int[] numbers) {
        for (int number : numbers) {
            System.out.print(number + " ");
        }
        System.out.println();
    }
}