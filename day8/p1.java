public class Main {
    public static void main(String[] args) {
        int[] num = {1,2,3,4,5};
        int result = LinearSearch(num, target:5);
        if(result == -1){
            System.out.println("Element not found");

        }else {
            System.out.println("Index: " + result);
        }
    }
    public static int LinearSearch(int[] array, int target){
        int len = array.length;
        for (int i = 0; i < len; i++) {
            if (array[i] == target) {
                return i;
            }
        }
    }
}