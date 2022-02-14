package day3;

public class ArrayPass {

	public static void main(String[] args) {
		ArrayPass sc = new ArrayPass();
		int arr[] = {1,2,3};
		sc.sum(arr);
		

	}
	public void sum(int[] a) {
		int res=0;
		for(int i:a) {
			res+=i;
		}
		System.out.println(res);
	}

}
