public class Main {
	public static void main(String[] args) {
		int[] arr = new int[5];
		
		for (int i = 0; i < arr.length; i++) {
		arr[i] = i + 1;
		}
		System.out.println("Array contents: ");

		for (int val : arr) {
		System.out.println(val);
		}
		
		arr = null;	    
	}
}
    
